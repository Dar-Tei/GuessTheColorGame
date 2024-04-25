#ifndef ADDCOLORWINDOW_H
#define ADDCOLORWINDOW_H

#include <QWidget>
#include "colordata.h" // Assuming colordata.h contains the declaration of ColorData class

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
    ColorData m_colorData; // Declare m_colorData as a member variable
};

#endif // ADDCOLORWINDOW_H
