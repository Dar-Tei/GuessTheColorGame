#include "currentresult.h"
#include "ui_currentresult.h"

CurrentResult::CurrentResult(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CurrentResult)
{
    ui->setupUi(this);
}

CurrentResult::~CurrentResult()
{
    delete ui;
}
