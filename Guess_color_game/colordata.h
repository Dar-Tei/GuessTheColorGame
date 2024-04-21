
#ifndef COLORDATA_H
#define COLORDATA_H

#include <QColor>
#include <QStringList>

class ColorData
{
public:
    ColorData();
    bool loadColorsFromJson(const QString &filename);
    QColor getRandomColor() const;
    QString getColorName(const QColor &color) const;

    void addColor(const QColor &color, const QString &colorName);
    bool saveColorsToJson(const QString &filename) const;

private:
    QList<QColor> m_colors;
    QStringList m_colorNames; 
};

#endif 
