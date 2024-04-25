/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *mainPushButton;
    QLineEdit *mainLineEdit;
    QMenuBar *mainMenubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(414, 494);
        MainWindow->setMinimumSize(QSize(414, 494));
        MainWindow->setMaximumSize(QSize(414, 494));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Guess the color.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 296, 391, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(75, 20, 250, 250));
        label->setAlignment(Qt::AlignCenter);
        mainPushButton = new QPushButton(centralwidget);
        mainPushButton->setObjectName("mainPushButton");
        mainPushButton->setGeometry(QRect(130, 370, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        mainPushButton->setFont(font1);
        mainPushButton->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        mainLineEdit = new QLineEdit(centralwidget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(91, 338, 221, 21));
        mainLineEdit->setToolTipDuration(-1);
        mainLineEdit->setLayoutDirection(Qt::LeftToRight);
        mainLineEdit->setStyleSheet(QString::fromUtf8("  background-color: rgba(31, 31, 31, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        mainLineEdit->setLocale(QLocale(QLocale::Ukrainian, QLocale::Ukraine));
        mainLineEdit->setAlignment(Qt::AlignCenter);
        mainLineEdit->setClearButtonEnabled(false);
        MainWindow->setCentralWidget(centralwidget);
        mainMenubar = new QMenuBar(MainWindow);
        mainMenubar->setObjectName("mainMenubar");
        mainMenubar->setGeometry(QRect(0, 0, 414, 22));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        mainMenubar->setFont(font2);
        menu = new QMenu(mainMenubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(mainMenubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        mainMenubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\263\320\260\320\264\320\260\320\271 \320\272\320\276\320\273\321\226\321\200!", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\262\320\273\320\260\321\201\320\275\320\270\320\271 \320\272\320\276\320\273\321\226\321\200", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\271 \321\202\320\260 \320\277\321\226\320\267\320\275\320\260\320\262\320\260\320\271 \320\272\320\276\320\273\321\226\321\200\320\275\320\270\320\271 \320\277\321\200\320\276\321\201\321\202\321\226\321\200 RGB", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mainPushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\320\260\321\202\320\270 \320\263\321\200\321\203!", nullptr));
#if QT_CONFIG(accessibility)
        mainLineEdit->setAccessibleDescription(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(accessibility)
        mainLineEdit->setInputMask(QString());
        mainLineEdit->setText(QString());
        mainLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\260\320\266\321\226\321\202\321\214 \321\226\320\274'\321\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\342\230\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
