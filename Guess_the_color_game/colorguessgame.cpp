/*#include "ColorGuessGame.h"
#include <QRandomGenerator>

ColorGuessGame::ColorGuessGame(QObject *parent) : QObject(parent) {
    m_colorArray << Qt::red << Qt::green << Qt::blue << Qt::cyan << Qt::magenta << Qt::yellow;
    int index = QRandomGenerator::global()->bounded(m_colorArray.size());
    m_initialColor = m_colorArray[index];
    generateColor();
}


QColor ColorGuessGame::initialColor() const {
    return m_initialColor;
}

void ColorGuessGame::generateColor() {

    int index = QRandomGenerator::global()->bounded(m_colorArray.size());
    QColor randomColor = m_colorArray[index];

    emit colorChanged(randomColor);
}
*/
