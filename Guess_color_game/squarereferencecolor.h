#ifndef SQUAREREFERENCECOLOR_H
#define SQUAREREFERENCECOLOR_H

#include "qcolor.h"
#include "square.h"

class SquareReferenceColor : public Square {
public:
    void GetColorSquare() override;
private:
    QVector<QColor> m_colors;
};

#endif
