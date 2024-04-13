#ifndef COLOR_GUESS_GAME_H
#define COLOR_GUESS_GAME_H

#include <QObject>
#include <QColor>
#include <QVector>

class ColorGuessGame : public QObject {
    Q_OBJECT

public:
    explicit ColorGuessGame(QObject *parent = nullptr);
    QColor initialColor() const; // Declaration

signals:
    void colorChanged(const QColor &color);

public slots:
    void generateColor();

private:
    QVector<QColor> m_colorArray;
    QColor m_initialColor;
};

#endif // COLOR_GUESS_GAME_H
