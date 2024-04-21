#include "usersscorewindow.h"
#include "ui_usersscorewindow.h"
#include "playermanager.h"
#include <QVector>
#include <QScrollBar>

UsersScoreWindow::UsersScoreWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UsersScoreWindow)
{
    ui->setupUi(this);

    ui->plainTextEdit->verticalScrollBar()->setStyleSheet(
        "QScrollBar:vertical {"
        "    background-color: rgba(0, 0, 0, 0.00);"
        "    border-radius: 8px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background: #666666;"
        "    min-height: 20px;"
        "    border-radius: 8px;"
        "}"
        "QScrollBar::add-line:vertical {"
        "    background: none;"
        "}"
        "QScrollBar::sub-line:vertical {"
        "    background: none;"
        "}"
        );
    PlayerManager playerManager;
    QVector<QString> playerScores = playerManager.getPlayerScores();
    ui->pushButton->setCursor(Qt::PointingHandCursor);


    for (const QString &score : playerScores) {
        QStringList scoreParts = score.split(",");
        QString playerName = scoreParts[0].trimmed();
        QString referenceColor = scoreParts[1].trimmed();
        QString referenceColorName = scoreParts[2].trimmed();
        QString userColor = scoreParts[3].trimmed();
        QString userColorName = scoreParts[4].trimmed();
        QString resultMessage = scoreParts[5].trimmed();


        QString formattedScore = QString("\n%1:\n Еталонний колір: %2 (%3);\n Колір гравця: %4 (%5);\n Результат гри: %6")
        .arg(playerName)
        .arg(referenceColor)
        .arg(referenceColorName)
        .arg(userColor)
        .arg(userColorName)
        .arg(resultMessage);

        ui->plainTextEdit->appendPlainText(formattedScore);
    }



    connect(ui->pushButton, &QPushButton::clicked, this, &UsersScoreWindow::close);
}

UsersScoreWindow::~UsersScoreWindow()
{
    delete ui;
}
