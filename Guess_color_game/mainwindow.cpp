#include <QMainWindow>
#include <QMessageBox>
#include <QDateTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include "addcolorwindow.h"
#include "usersscorewindow.h"
#include "playermanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->mainPushButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->action, &QAction::triggered, this, &MainWindow::showAddColorWindow);
    connect(ui->action_2, &QAction::triggered, this, &MainWindow::showUsersScoreWindow);

    QPixmap pixmap("../Guess_color_game/images/Guess the color.png");

    ui->label->setPixmap(pixmap);
    ui->mainPushButton->setCursor(Qt::PointingHandCursor);
    ui->mainLineEdit->setCursor(Qt::IBeamCursor);
    ui->menu->setCursor(Qt::PointingHandCursor);
    ui->mainMenubar->setCursor(Qt::PointingHandCursor);
}

void MainWindow::startGame()
{
    QString playerName = ui->mainLineEdit->text();
    if (playerName.isEmpty()) {
        QMessageBox::information(this, "Помилка", "Будь ласка, введіть ім'я гравця.");
        return;
    }

    playerName = QDateTime::currentDateTime().toString("yy.MM.dd hh:mm:ss") + ": " + playerName;

    m_playerManager.addPlayer(playerName);

    // Disable UI elements
    // ui->mainPushButton->setEnabled(false);
    // ui->mainLineEdit->setEnabled(false);
    // ui->mainMenubar->setEnabled(false);
    this->setEnabled(false);
    // Assuming lineEdit contains the player's name
    GameWindow *gameWindow = new GameWindow(playerName, this);

    // Connect the custom closed signal of the GameWindow to enableUIElements() slot
    connect(gameWindow, &GameWindow::closed, this, &MainWindow::enableUIElements);

    gameWindow->show();
}

void MainWindow::enableUIElements()
{
    // Enable UI elements when the game window is closed
   this->setEnabled(true);
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


