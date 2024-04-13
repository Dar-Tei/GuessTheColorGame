/*#ifndef COLOR_SQUARE_H
#define COLOR_SQUARE_H

#include <QWidget>
#include <QColor>

class ColorSquare : public QWidget {
    Q_OBJECT

public:
    ColorSquare(QWidget *parent = nullptr);

    void setInitialColor(const QColor &color); // Declaration

    void setColor(const QColor &color);
    QColor color() const;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QColor m_color;
};

#endif // COLOR_SQUARE_H*/
