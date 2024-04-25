/********************************************************************************
** Form generated from reading UI file 'addcolorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOLORWINDOW_H
#define UI_ADDCOLORWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddColorWindow
{
public:
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QLabel *label_2;
    QFrame *frame;
    QSpinBox *spinBox_3;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *AddColorWindow)
    {
        if (AddColorWindow->objectName().isEmpty())
            AddColorWindow->setObjectName("AddColorWindow");
        AddColorWindow->resize(421, 480);
        AddColorWindow->setMinimumSize(QSize(421, 457));
        AddColorWindow->setMaximumSize(QSize(421, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Guess the color.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddColorWindow->setWindowIcon(icon);
        label_4 = new QLabel(AddColorWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(298, 390, 16, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        label_4->setFont(font);
        spinBox_2 = new QSpinBox(AddColorWindow);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(170, 383, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setWeight(QFont::Medium);
        spinBox_2->setFont(font1);
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
        spinBox_2->setValue(255);
        pushButton = new QPushButton(AddColorWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(44, 430, 141, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;\n"
"\n"
"\n"
"\n"
""));
        spinBox = new QSpinBox(AddColorWindow);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(28, 383, 81, 31));
        spinBox->setFont(font1);
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
        spinBox->setValue(255);
        label_2 = new QLabel(AddColorWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(8, 390, 16, 16));
        label_2->setFont(font);
        frame = new QFrame(AddColorWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 39, 281, 281));
        QFont font3;
        font3.setPointSize(12);
        frame->setFont(font3);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        spinBox_3 = new QSpinBox(AddColorWindow);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(318, 383, 81, 31));
        spinBox_3->setFont(font1);
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
        spinBox_3->setValue(255);
        label = new QLabel(AddColorWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 9, 241, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(true);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(AddColorWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(234, 430, 141, 41));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        label_3 = new QLabel(AddColorWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 390, 16, 16));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        label_3->setFont(font5);
        lineEdit = new QLineEdit(AddColorWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 330, 241, 21));
        lineEdit->setToolTipDuration(-1);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QString::fromUtf8("  background-color: rgba(31, 31, 31, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        lineEdit->setLocale(QLocale(QLocale::Ukrainian, QLocale::Ukraine));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(false);

        retranslateUi(AddColorWindow);

        QMetaObject::connectSlotsByName(AddColorWindow);
    } // setupUi

    void retranslateUi(QWidget *AddColorWindow)
    {
        AddColorWindow->setWindowTitle(QCoreApplication::translate("AddColorWindow", "\320\224\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \320\272\320\276\320\273\321\214\320\276\321\200\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("AddColorWindow", "B", nullptr));
        pushButton->setText(QCoreApplication::translate("AddColorWindow", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("AddColorWindow", "R", nullptr));
        label->setText(QCoreApplication::translate("AddColorWindow", "\320\222\320\272\320\260\320\266\321\226\321\202\321\214 \320\262\320\273\320\260\321\201\320\275\320\270\320\271 \320\272\320\276\320\273\321\226\321\200 ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddColorWindow", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("AddColorWindow", "G", nullptr));
#if QT_CONFIG(accessibility)
        lineEdit->setAccessibleDescription(QCoreApplication::translate("AddColorWindow", "1", nullptr));
#endif // QT_CONFIG(accessibility)
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("AddColorWindow", "\320\222\320\272\320\260\320\266\321\226\321\202\321\214 \320\275\320\260\320\267\320\262\321\203 \320\272\320\276\320\273\321\214\320\276\321\200\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddColorWindow: public Ui_AddColorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOLORWINDOW_H
