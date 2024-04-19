#ifndef CURRENTRESULTWINDOW_H
#define CURRENTRESULTWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CurrentResultWindow; }
QT_END_NAMESPACE

class CurrentResultWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CurrentResultWindow(QWidget *parent = nullptr);
    ~CurrentResultWindow();

    void setReferenceColor(const QColor &color);
    void setUserColor(const QColor &color);
    void setResultMessage(const QString &message);

private slots:
    void on_pushButton_clicked();

private:
    Ui::CurrentResultWindow *ui;
    QColor referenceColor;
    QColor userColor;
};

#endif
