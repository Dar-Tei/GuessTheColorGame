#include "addcolorwindow.h"
#include "ui_addcolorwindow.h"

AddColorWindow::AddColorWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddColorWindow)
{
    ui->setupUi(this);
    ui->pushButton->setCursor(Qt::PointingHandCursor);
    ui->pushButton_2->setCursor(Qt::PointingHandCursor);
    ui->spinBox->setCursor(Qt::IBeamCursor);
    ui->spinBox_2->setCursor(Qt::IBeamCursor);
    ui->spinBox_3->setCursor(Qt::IBeamCursor);
    ui->lineEdit->setCursor(Qt::IBeamCursor);
    ui->pushButton->setCursor(Qt::PointingHandCursor);

}

AddColorWindow::~AddColorWindow()
{
    delete ui;
}

// QString playerName = ui->lineEdit->text().trimmed();
// if (playerName.isEmpty()) {
//     QMessageBox::information(this, "Помилка", "Будь ласка, введіть ім'я гравця.");
//     return;
// }
