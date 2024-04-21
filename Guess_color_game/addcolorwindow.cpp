#include "addcolorwindow.h"
#include "ui_addcolorwindow.h"
#include <QMessageBox> 

AddColorWindow::AddColorWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddColorWindow)
{
    ui->setupUi(this);
    
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

    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    QString styleSheet = QString("background-color: rgb(%1, %2, %3); border-radius: 8px;").arg(red).arg(green).arg(blue);
    ui->frame->setStyleSheet(styleSheet);
}

void AddColorWindow::AddColor()
{
    
    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    
    QString colorName = ui->lineEdit->text();

    m_colorData.addColor(QColor(red, green, blue), colorName);

    if (!m_colorData.saveColorsToJson("../Guess_color_game/colors/colors.json")) {
        QMessageBox::critical(this, "Error", "Failed to save colors to JSON file.");
        return;
    }

    QMessageBox::information(this, "Success", "Color added successfully.");
    Close_window();
}
