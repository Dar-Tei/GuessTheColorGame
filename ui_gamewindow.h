/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpinBox *spinBox_3;
    QLabel *label_3;
    QSpinBox *spinBox;
    QFrame *frame;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label;

    void setupUi(QWidget *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->resize(421, 457);
        GameWindow->setMinimumSize(QSize(421, 457));
        GameWindow->setMaximumSize(QSize(421, 457));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Guess the color.png"), QSize(), QIcon::Normal, QIcon::Off);
        GameWindow->setWindowIcon(icon);
        pushButton_2 = new QPushButton(GameWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 400, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        label_2 = new QLabel(GameWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(8, 348, 16, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        label_2->setFont(font1);
        pushButton = new QPushButton(GameWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 400, 141, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"\n"
"\n"
"\n"
""));
        spinBox_3 = new QSpinBox(GameWindow);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(318, 341, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setWeight(QFont::Medium);
        spinBox_3->setFont(font2);
        spinBox_3->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  border-width: 0;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"  font-weight: 500;\n"
"  line-height: 20px;\n"
"  padding: 10px 12px;\n"
"\n"
""));
        spinBox_3->setMaximum(255);
        label_3 = new QLabel(GameWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 348, 16, 16));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        label_3->setFont(font3);
        spinBox = new QSpinBox(GameWindow);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(28, 341, 81, 31));
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  border-width: 0;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"  font-weight: 500;\n"
"  line-height: 20px;\n"
"  padding: 10px 12px;\n"
"\n"
""));
        spinBox->setMaximum(255);
        frame = new QFrame(GameWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 40, 281, 281));
        QFont font4;
        font4.setPointSize(12);
        frame->setFont(font4);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(GameWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(298, 348, 16, 16));
        label_4->setFont(font1);
        spinBox_2 = new QSpinBox(GameWindow);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(170, 341, 81, 31));
        spinBox_2->setFont(font2);
        spinBox_2->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  border-width: 0;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"  font-weight: 500;\n"
"  line-height: 20px;\n"
"  padding: 10px 12px;\n"
"\n"
""));
        spinBox_2->setMaximum(255);
        label = new QLabel(GameWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 241, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(12);
        font5.setBold(true);
        label->setFont(font5);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QWidget *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "\320\223\321\200\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GameWindow", "\320\257 \320\277\320\260\321\201.", nullptr));
        label_2->setText(QCoreApplication::translate("GameWindow", "R", nullptr));
        pushButton->setText(QCoreApplication::translate("GameWindow", "\320\237\320\265\321\200\320\265\320\262\321\226\321\200 \320\274\320\265\320\275\320\265!", nullptr));
        label_3->setText(QCoreApplication::translate("GameWindow", "G", nullptr));
        label_4->setText(QCoreApplication::translate("GameWindow", "B", nullptr));
        label->setText(QCoreApplication::translate("GameWindow", "\320\257\320\272\320\270\320\271 \320\272\320\276\320\273\321\226\321\200 \320\267\320\260\321\200\320\260\320\267 \320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\276?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
