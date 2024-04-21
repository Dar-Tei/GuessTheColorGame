#include "addcolorwindow.h"
#include "ui_addcolorwindow.h"
#include <QMessageBox> // Include the header file for QMessageBox

AddColorWindow::AddColorWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddColorWindow)
{
    ui->setupUi(this);
    // Assuming m_colorData is a member variable of AddColorWindow class
    if (!m_colorData.loadColorsFromJson("../Guess_color_game/colors/colors.json")) {
        QMessageBox::critical(this, "Error", "Failed to load colors from JSON file.");
        return;
    }

    connect(ui->pushButton, &QPushButton::clicked, this, &AddColorWindow::Close_window);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &AddColorWindow::AddColor);
    connect(ui->spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
    connect(ui->spinBox_2, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
    connect(ui->spinBox_3, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
}


AddColorWindow::~AddColorWindow()
{
    delete ui;
}

void AddColorWindow::Close_window(){
    this->close();
}

void AddColorWindow::updateColorPreview()
{
    // Read the values from the spin boxes
    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    // Set the background color of the preview frame using stylesheets
    QString styleSheet = QString("background-color: rgb(%1, %2, %3); border-radius: 8px;").arg(red).arg(green).arg(blue);
    ui->frame->setStyleSheet(styleSheet);
}

void AddColorWindow::AddColor()
{
    // Read the color values from the spin boxes
    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    // Get the color name from the line edit
    QString colorName = ui->lineEdit->text();

    // Add the color to the color data
    m_colorData.addColor(QColor(red, green, blue), colorName);

    // Save the colors to the JSON file
    if (!m_colorData.saveColorsToJson("../Guess_color_game/colors/colors.json")) {
        QMessageBox::critical(this, "Error", "Failed to save colors to JSON file.");
        return;
    }

    // Inform the user that the color has been added successfully
    QMessageBox::information(this, "Success", "Color added successfully.");
    Close_window();
}
