#ifndef ADDCOLORWINDOW_H
#define ADDCOLORWINDOW_H

#include <QWidget>

namespace Ui {
class AddColorWindow;
}

class AddColorWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddColorWindow(QWidget *parent = nullptr);
    ~AddColorWindow();

private:
    Ui::AddColorWindow *ui;
};

#endif
