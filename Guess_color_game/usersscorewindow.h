#ifndef USERSSCOREWINDOW_H
#define USERSSCOREWINDOW_H

#include <QWidget>

namespace Ui {
class UsersScoreWindow;
}

class UsersScoreWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UsersScoreWindow(QWidget *parent = nullptr);
    ~UsersScoreWindow();

    void populateListView(const QStringList& playerResults); // Declaration

private:
    Ui::UsersScoreWindow *ui;
};

#endif // USERSSCOREWINDOW_H
