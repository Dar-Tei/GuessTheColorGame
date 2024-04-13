#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (!m_colorData.loadColorsFromJson("../Guess_the_color_game/colors.json")) {
        QMessageBox::critical(this, "Error", "Failed to load colors from JSON file.");
        return;
    }

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::checkGuess);

    updateSquareColor();
}

void MainWindow::updateSquareColor() {

    QColor selectedColor = m_colorData.getRandomColor();
    ui->frame->setStyleSheet(QString("background-color: %1").arg(selectedColor.name()));
}

void MainWindow::checkGuess() {
    int userRed = ui->spinBox->value();
    int userGreen = ui->spinBox_2->value();
    int userBlue = ui->spinBox_3->value();

    QColor selectedColor = ui->frame->palette().color(QPalette::Window);

    double distance = colorDistance(selectedColor.red(), selectedColor.green(), selectedColor.blue(), userRed, userGreen, userBlue);

    QString resultMessage;
    if (distance <= 1) {
        resultMessage = "Відмінно!";
    } else if (distance <= 20 && distance > 1) {
        resultMessage = "Дуже близько!";
    } else if (distance <= 60 && distance > 20) {
        resultMessage = "Близько!";
    } else if (distance <= 100 && distance > 60) {
        resultMessage = "50/50";
    } else {
        resultMessage = "Спробуй ще раз.";
    }

    QMessageBox::information(this, "Result", resultMessage);

    updateSquareColor();
}

double MainWindow::colorDistance(int r1, int g1, int b1, int r2, int g2, int b2) {
    return sqrt(pow(r2 - r1, 2) + pow(g2 - g1, 2) + pow(b2 - b1, 2));
}


MainWindow::~MainWindow()
{
    delete ui;
}
