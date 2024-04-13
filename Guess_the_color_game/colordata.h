#ifndef COLORDATA_H
#define COLORDATA_H

#include <QVector>
#include <QColor>
#include <QString>

class ColorData
{
public:
    ColorData();

    bool loadColorsFromJson(const QString &filename);
    QColor getRandomColor() const;

private:
    QVector<QColor> m_colors;
};

#endif 

