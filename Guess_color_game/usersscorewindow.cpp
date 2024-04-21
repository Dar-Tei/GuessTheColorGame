#include "usersscorewindow.h"
#include "ui_usersscorewindow.h"
#include "playermanager.h"
#include <QVector>

UsersScoreWindow::UsersScoreWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UsersScoreWindow)
{
    ui->setupUi(this);


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


        QString formattedScore = QString("%1 | %2 (%3) | %4 (%5) | %6")
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
