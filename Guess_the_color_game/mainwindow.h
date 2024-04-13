#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "colordata.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void checkGuess();
    void updateSquareColor();
    void on_pushButton_2_clicked();
    double colorDistance(int r1, int g1, int b1, int r2, int g2, int b2);

private:
    Ui::MainWindow *ui;
    ColorData m_colorData;
};

#endif // MAINWINDOW_H
