#ifndef CURRENTRESULT_H
#define CURRENTRESULT_H

#include <QWidget>

namespace Ui {
class CurrentResult;
}

class CurrentResult : public QWidget
{
    Q_OBJECT

public:
    explicit CurrentResult(QWidget *parent = nullptr);
    ~CurrentResult();

private:
    Ui::CurrentResult *ui;
};

#endif // CURRENTRESULT_H
