#ifndef ADDCOLORWINDOW_H
#define ADDCOLORWINDOW_H

#include <QWidget>
#include "colordata.h"

namespace Ui {
class AddColorWindow;
}

class AddColorWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddColorWindow(QWidget *parent = nullptr);
    ~AddColorWindow();

private slots:
    void updateColorPreview();
    void AddColor();
    void Close_window();

private:
    Ui::AddColorWindow *ui;
    ColorData m_colorData;
};

#endif
