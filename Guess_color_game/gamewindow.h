#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "colordata.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void checkGuess();
    void updateSquareColor();
    void on_pushButton_2_clicked();
    double colorDistance(int r1, int g1, int b1, int r2, int g2, int b2);

private:
    Ui::GameWindow *ui;
    ColorData m_colorData;
};

#endif
