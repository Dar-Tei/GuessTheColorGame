/********************************************************************************
** Form generated from reading UI file 'usersscorewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSSCOREWINDOW_H
#define UI_USERSSCOREWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersScoreWindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *UsersScoreWindow)
    {
        if (UsersScoreWindow->objectName().isEmpty())
            UsersScoreWindow->setObjectName("UsersScoreWindow");
        UsersScoreWindow->resize(405, 440);
        UsersScoreWindow->setMinimumSize(QSize(405, 440));
        UsersScoreWindow->setMaximumSize(QSize(405, 440));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Guess the color.png"), QSize(), QIcon::Normal, QIcon::Off);
        UsersScoreWindow->setWindowIcon(icon);
        label = new QLabel(UsersScoreWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 241, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(UsersScoreWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 360, 151, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"\n"
"\n"
"\n"
""));
        plainTextEdit = new QPlainTextEdit(UsersScoreWindow);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 40, 381, 291));
        plainTextEdit->setFont(font1);
        plainTextEdit->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"\n"
"\n"
"\n"
""));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setReadOnly(true);

        retranslateUi(UsersScoreWindow);

        QMetaObject::connectSlotsByName(UsersScoreWindow);
    } // setupUi

    void retranslateUi(QWidget *UsersScoreWindow)
    {
        UsersScoreWindow->setWindowTitle(QCoreApplication::translate("UsersScoreWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270 \320\263\321\200\320\260\320\262\321\206\321\226\320\262", nullptr));
        label->setText(QCoreApplication::translate("UsersScoreWindow", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270: ", nullptr));
        pushButton->setText(QCoreApplication::translate("UsersScoreWindow", "\320\236\320\232", nullptr));
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("UsersScoreWindow", "\320\237\321\226\321\201\320\273\321\217 \320\277\321\200\320\276\321\205\320\276\320\264\320\266\320\265\320\275\320\275\321\217 \320\263\321\200\320\270 \321\202\321\203\321\202 \320\267'\321\217\320\262\320\273\321\217\321\202\321\214\321\201\321\217 \320\262\320\260\321\210\321\226 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersScoreWindow: public Ui_UsersScoreWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSSCOREWINDOW_H
