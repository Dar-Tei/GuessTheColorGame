#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::startGame);
    QPixmap pixmap("../Guess_color_game/images/Guess the color.png");
    ui->label->setPixmap(pixmap);
    ui->pushButton->setCursor(Qt::PointingHandCursor);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startGame()
{
    GameWindow *gameWindow = new GameWindow;
    gameWindow->show();
    this->close();
}
