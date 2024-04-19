#include "currentresultwindow.h"
#include "ui_currentresultwindow.h"

CurrentResultWindow::CurrentResultWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurrentResultWindow)
{
    ui->setupUi(this);
}

CurrentResultWindow::~CurrentResultWindow()
{
    delete ui;
}

void CurrentResultWindow::setReferenceColor(const QColor &color) {
    referenceColor = color;

    QString rgbText = QString("Еталонний колір: %1 %2 %3").arg(color.red()).arg(color.green()).arg(color.blue());
    ui->label->setText(rgbText);

    ui->frame->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(color.red()).arg(color.green()).arg(color.blue()));
}

void CurrentResultWindow::setUserColor(const QColor &color) {
    userColor = color;

    QString rgbText = QString("Ваш колір: %1 %2 %3").arg(color.red()).arg(color.green()).arg(color.blue());
    ui->label_2->setText(rgbText);

    ui->frame_2->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(color.red()).arg(color.green()).arg(color.blue()));
}

void CurrentResultWindow::setResultMessage(const QString &message)
{
    ui->label_3->setText(message);
}

void CurrentResultWindow::on_pushButton_clicked()
{
    this->close();
}
