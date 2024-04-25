/********************************************************************************
** Form generated from reading UI file 'currentresultwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTRESULTWINDOW_H
#define UI_CURRENTRESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentResultWindow
{
public:
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QFrame *frame_2;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *CurrentResultWindow)
    {
        if (CurrentResultWindow->objectName().isEmpty())
            CurrentResultWindow->setObjectName("CurrentResultWindow");
        CurrentResultWindow->resize(628, 478);
        CurrentResultWindow->setMinimumSize(QSize(628, 478));
        CurrentResultWindow->setMaximumSize(QSize(628, 478));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Guess the color.png"), QSize(), QIcon::Normal, QIcon::Off);
        CurrentResultWindow->setWindowIcon(icon);
        label_3 = new QLabel(CurrentResultWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(233, 380, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(CurrentResultWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(239, 419, 141, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("  background-color: rgba(51, 51, 51, 0.05);\n"
"  border-radius: 8px;\n"
"  color: #333333;\n"
"  font-size: 14px;"));
        label_4 = new QLabel(CurrentResultWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 5, 241, 31));
        label_4->setFont(font);
        frame_2 = new QFrame(CurrentResultWindow);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(330, 40, 281, 281));
        QFont font2;
        font2.setPointSize(12);
        frame_2->setFont(font2);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(CurrentResultWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 40, 281, 281));
        frame->setFont(font2);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(CurrentResultWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 330, 281, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(CurrentResultWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(363, 328, 221, 41));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        retranslateUi(CurrentResultWindow);

        QMetaObject::connectSlotsByName(CurrentResultWindow);
    } // setupUi

    void retranslateUi(QWidget *CurrentResultWindow)
    {
        CurrentResultWindow->setWindowTitle(QCoreApplication::translate("CurrentResultWindow", "\320\237\320\276\321\202\320\276\321\207\320\275\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\263\321\200\320\270", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("CurrentResultWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\320\270 \320\263\321\200\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("CurrentResultWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270 \320\263\321\200\320\270:", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CurrentResultWindow: public Ui_CurrentResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTRESULTWINDOW_H
