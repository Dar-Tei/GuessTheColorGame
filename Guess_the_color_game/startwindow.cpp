#include "startwindow.h"
#include "ui_startwindow.h"
#include "mainwindow.h"

StartWindow::StartWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartWindow)
{
    ui->setupUi(this);

    // Connect the button's clicked signal to the startGame() slot
    connect(ui->pushButton, &QPushButton::clicked, this, &StartWindow::startGame);

    // Set image in TextLabel
    QPixmap pixmap("../Guess_the_color_game/images/Guess the color.png");
    ui->label->setPixmap(pixmap);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::startGame()
{
    // Open the main window
    MainWindow *mainWindow = new MainWindow;
    mainWindow->show();

    this->close();
}
