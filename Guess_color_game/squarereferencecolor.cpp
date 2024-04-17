#include "squarereferencecolor.h"
#include "colordata.h"
#include <QRandomGenerator>

SquareReferenceColor::SquareReferenceColor(QWidget *parent)
    : Square(parent)
{
    // Initialize any necessary data
}

void SquareReferenceColor::GetColorSquare() {
    // Retrieve the list of colors from ColorData
    m_colors = ColorData::getInstance().getAllColors();

    // Check if the colors list is empty
    if (m_colors.isEmpty()) {
        squareColor = QColor(); // Set an invalid color
        return;
    }

    // Generate a random index to select a color from the list
    int randomIndex = QRandomGenerator::global()->bounded(m_colors.size());

    // Get the color at the random index
    QColor randomColor = m_colors[randomIndex];

    // Set the color of the square
    SetColorSquare(randomColor.red(), randomColor.green(), randomColor.blue());
}
