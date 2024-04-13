/*#include "ColorSquare.h"
#include <QPainter>

ColorSquare::ColorSquare(QWidget *parent) : QWidget(parent) {
}

void ColorSquare::setInitialColor(const QColor &color) {
    m_color = color;
    update();
}

void ColorSquare::setColor(const QColor &color) {
    m_color = color;
    update();
}

QColor ColorSquare::color() const {
    return m_color;
}

void ColorSquare::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.fillRect(rect(), m_color);
}
*/
