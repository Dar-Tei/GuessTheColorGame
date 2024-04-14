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
        if (colorObject.contains("red") && colorObject.contains("green") && colorObject.contains("blue")) {
            int red = colorObject["red"].toInt();
            int green = colorObject["green"].toInt();
            int blue = colorObject["blue"].toInt();
            m_colors.append(QColor(red, green, blue));
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
