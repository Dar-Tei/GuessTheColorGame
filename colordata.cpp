#include "colordata.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QRandomGenerator>

ColorData::ColorData()
{
}

bool ColorData::loadColorsFromJson(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        return false;
    }

    QJsonObject jsonObject = jsonDoc.object();
    if (!jsonObject.contains("colors") || !jsonObject["colors"].isArray()) {
        return false;
    }

    QJsonArray colorsArray = jsonObject["colors"].toArray();
    for (const QJsonValue &colorValue : colorsArray) {
        QJsonObject colorObject = colorValue.toObject();
        if (colorObject.contains("red") && colorObject.contains("green") && colorObject.contains("blue") && colorObject.contains("namecolor")) {
            int red = colorObject["red"].toInt();
            int green = colorObject["green"].toInt();
            int blue = colorObject["blue"].toInt();
            QString namecolor = colorObject["namecolor"].toString();
            m_colors.append(QColor(red, green, blue));
            m_colorNames.append(namecolor);
        }
    }

    return true;
}

QColor ColorData::getRandomColor() const
{
    if (m_colors.isEmpty())
        return QColor();

    return m_colors[QRandomGenerator::global()->bounded(m_colors.size())];
}

QString ColorData::getColorName(const QColor &color) const
{
    int index = m_colors.indexOf(color);
    if (index != -1 && index < m_colorNames.size()) {
        return m_colorNames[index];
    } else {
        return QString("Невизначений колір");
    }
}
void ColorData::addColor(const QColor &color, const QString &colorName)
{
    m_colors.append(color);
    m_colorNames.append(colorName);
}

bool ColorData::saveColorsToJson(const QString &filename) const
{
    QJsonObject jsonObject;
    QJsonArray colorsArray;

    // Add each color to the JSON array
    for (int i = 0; i < m_colors.size(); ++i) {
        QJsonObject colorObject;
        colorObject["red"] = m_colors[i].red();
        colorObject["green"] = m_colors[i].green();
        colorObject["blue"] = m_colors[i].blue();
        colorObject["namecolor"] = m_colorNames[i];
        colorsArray.append(colorObject);
    }

    // Add the colors array to the JSON object
    jsonObject["colors"] = colorsArray;

    // Write the JSON object to the file
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return false;
    }

    QJsonDocument jsonDoc(jsonObject);
    file.write(jsonDoc.toJson());
    file.close();

    return true;
}

int ColorData::colorsCount() const
{
    return m_colors.size();
}

QColor ColorData::getColor(int index) const
{
    return (index >= 0 && index < m_colors.size()) ? m_colors[index] : QColor();
}
