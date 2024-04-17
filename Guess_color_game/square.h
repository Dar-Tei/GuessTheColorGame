// square.h

#ifndef SQUARE_H
#define SQUARE_H

#include <string>

class Square {
protected:
    int squareSize;
    std::string squareColor;

public:
    virtual void GetColorSquare() = 0;
    void GetSizeSquare(int size);
    void SetColorSquare(int r, int g, int b);
    void SetSizeSquare(int size);
};

#endif // SQUARE_H
