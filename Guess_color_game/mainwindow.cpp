#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include "addcolorwindow.h"
#include "usersscorewindow.h"
#include <QMainWindow>
#include <QMessageBox>
#include "playermanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->action, &QAction::triggered, this, &MainWindow::showAddColorWindow);
    connect(ui->action_2, &QAction::triggered, this, &MainWindow::showUsersScoreWindow);

    QPixmap pixmap("../Guess_color_game/images/Guess the color.png");

    ui->label->setPixmap(pixmap);
    ui->pushButton->setCursor(Qt::PointingHandCursor);
    ui->lineEdit->setCursor(Qt::IBeamCursor);
    ui->menu->setCursor(Qt::PointingHandCursor);
    ui->menubar->setCursor(Qt::PointingHandCursor);
}

void MainWindow::startGame()
{
    QString playerName = ui->lineEdit->text();
    if (playerName.isEmpty()) {
        QMessageBox::information(this, "Помилка", "Будь ласка, введіть ім'я гравця.");
        return;
    }

    m_playerManager.addPlayer(playerName);
    QMessageBox::information(this, "Повідомлення", QString("Ви увійшли як %1").arg(playerName));

      // Assuming lineEdit contains the player's name
    GameWindow *gameWindow = new GameWindow(playerName, this);
    gameWindow->show();
}


void MainWindow::showUsersScoreWindow()
{
    // Create and show the UsersScoreWindow
    UsersScoreWindow *scoreWindow = new UsersScoreWindow(nullptr);
    scoreWindow->show();
}

void MainWindow::showAddColorWindow()
{
    // Create and show the AddColorWindow with a parent of nullptr
    AddColorWindow *addColorWindow = new AddColorWindow(nullptr);
    addColorWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

