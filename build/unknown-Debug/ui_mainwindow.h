/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxPNG;
    QCheckBox *checkBoxGIF;
    QCheckBox *checkBoxTXT;
    QCheckBox *checkBoxLIB;
    QCheckBox *checkBoxBAT;
    QCheckBox *checkBoxJPG;
    QCheckBox *checkBoxMP3;
    QCheckBox *checkBoxEXE;
    QFrame *frame;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpinBox *spinBox_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox_4;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpinBox *spinBox;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(918, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(470, 250, 401, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(187, 0));

        horizontalLayout->addWidget(label);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(false);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(470, 20, 401, 57));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(true);

        verticalLayout->addWidget(lineEdit_4);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 250, 401, 57));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_4->addWidget(lineEdit_3);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(30, 20, 411, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        checkBoxPNG = new QCheckBox(layoutWidget3);
        checkBoxPNG->setObjectName("checkBoxPNG");

        gridLayout->addWidget(checkBoxPNG, 1, 0, 1, 1);

        checkBoxGIF = new QCheckBox(layoutWidget3);
        checkBoxGIF->setObjectName("checkBoxGIF");

        gridLayout->addWidget(checkBoxGIF, 1, 1, 1, 1);

        checkBoxTXT = new QCheckBox(layoutWidget3);
        checkBoxTXT->setObjectName("checkBoxTXT");
        checkBoxTXT->setEnabled(true);

        gridLayout->addWidget(checkBoxTXT, 0, 0, 1, 1);

        checkBoxLIB = new QCheckBox(layoutWidget3);
        checkBoxLIB->setObjectName("checkBoxLIB");

        gridLayout->addWidget(checkBoxLIB, 0, 2, 1, 1);

        checkBoxBAT = new QCheckBox(layoutWidget3);
        checkBoxBAT->setObjectName("checkBoxBAT");

        gridLayout->addWidget(checkBoxBAT, 1, 2, 1, 1);

        checkBoxJPG = new QCheckBox(layoutWidget3);
        checkBoxJPG->setObjectName("checkBoxJPG");

        gridLayout->addWidget(checkBoxJPG, 0, 1, 1, 1);

        checkBoxMP3 = new QCheckBox(layoutWidget3);
        checkBoxMP3->setObjectName("checkBoxMP3");

        gridLayout->addWidget(checkBoxMP3, 0, 3, 1, 1);

        checkBoxEXE = new QCheckBox(layoutWidget3);
        checkBoxEXE->setObjectName("checkBoxEXE");

        gridLayout->addWidget(checkBoxEXE, 1, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(240, 350, 401, 171));
        frame->setStyleSheet(QString::fromUtf8("QFrame { border: 1px solid black; }"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 120, 191, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(217, 50, 102, 1);\n"
"border-radius:3px;\n"
"color:white;\n"
"border-bottom: 4px solid rgba(170, 22, 72, 1)\n"
""));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 20, 241, 26));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {color: black;}"));
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 60, 114, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 0px solid black;}"));

        horizontalLayout_3->addWidget(label_9);

        spinBox_3 = new QSpinBox(layoutWidget_2);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setEnabled(false);
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(59);
        spinBox_3->setValue(0);

        horizontalLayout_3->addWidget(spinBox_3);

        layoutWidget_3 = new QWidget(frame);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(260, 60, 118, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 0px solid black;}"));

        horizontalLayout_4->addWidget(label_10);

        spinBox_4 = new QSpinBox(layoutWidget_3);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setEnabled(false);
        spinBox_4->setMinimum(1);
        spinBox_4->setMaximum(59);

        horizontalLayout_4->addWidget(spinBox_4);

        layoutWidget4 = new QWidget(frame);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(20, 60, 111, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 0px solid black;}"));

        horizontalLayout_2->addWidget(label_7);

        spinBox = new QSpinBox(layoutWidget4);
        spinBox->setObjectName("spinBox");
        spinBox->setEnabled(false);
        spinBox->setMinimum(0);
        spinBox->setMaximum(1000);
        spinBox->setValue(0);

        horizontalLayout_2->addWidget(spinBox);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(470, 280, 401, 62));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(187, 60));

        horizontalLayout_5->addWidget(label_8);

        radioButton_3 = new QRadioButton(layoutWidget_4);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setChecked(false);

        horizontalLayout_5->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget_4);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setChecked(true);

        horizontalLayout_5->addWidget(radioButton_4);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(30, 130, 841, 91));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget5);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { border: 1px solid black; }"));

        verticalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(layoutWidget5);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget5);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit { border: 1px solid black; }"));

        verticalLayout_3->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(layoutWidget5);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_3->addWidget(pushButton_3);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 918, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<b>\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\262\321\205\320\276\320\264\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213?</b>", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\230\320\273\320\270 \320\267\320\260\320\264\320\260\320\271\321\202\320\265 \321\210\320\260\320\261\320\273\320\276\320\275:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207 \320\274\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \321\204\320\260\320\273\320\276\320\262(8 \320\261\320\260\320\271\321\202/16 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262):", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "123456789ABCDEFA", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\265 \321\204\320\276\321\200\320\274\320\260\321\202\321\213 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        checkBoxPNG->setText(QCoreApplication::translate("MainWindow", "png", nullptr));
        checkBoxGIF->setText(QCoreApplication::translate("MainWindow", "gif", nullptr));
        checkBoxTXT->setText(QCoreApplication::translate("MainWindow", "txt", nullptr));
        checkBoxLIB->setText(QCoreApplication::translate("MainWindow", "lib", nullptr));
        checkBoxBAT->setText(QCoreApplication::translate("MainWindow", "bat", nullptr));
        checkBoxJPG->setText(QCoreApplication::translate("MainWindow", "jpg", nullptr));
        checkBoxMP3->setText(QCoreApplication::translate("MainWindow", "mp3", nullptr));
        checkBoxEXE->setText(QCoreApplication::translate("MainWindow", "exe", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\321\217\321\202\321\214 \321\201 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214\321\216", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\321\203\321\202\321\213", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\272\321\203\320\275\320\264\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<b>\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\321\213\320\262\320\260\321\202\321\214 <br> \320\277\320\276\320\262\321\202\320\276\321\200\321\217\321\216\321\211\320\270\320\265\321\201\321\217 <br> \320\262\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213?</b>", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \321\204\320\260\320\271\320\273\321\213 \320\270\320\267 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\320\270:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\270\321\200\321\203\321\216\321\211\320\270\321\205 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
