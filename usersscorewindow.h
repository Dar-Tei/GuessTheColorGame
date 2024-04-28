#ifndef USERSSCOREWINDOW_H
#define USERSSCOREWINDOW_H

#include <QWidget>
#include "playermanager.h"
namespace Ui {
class UsersScoreWindow;
}

class UsersScoreWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UsersScoreWindow(QWidget *parent = nullptr);
    ~UsersScoreWindow();

private:
    Ui::UsersScoreWindow *ui;
    PlayerManager m_playerManager;
    QString m_filePath;
};

#endif
