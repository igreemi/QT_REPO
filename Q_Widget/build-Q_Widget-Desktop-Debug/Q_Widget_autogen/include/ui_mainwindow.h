/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QRadioButton *rb_up;
    QRadioButton *rb_down;
    QComboBox *cBox_box;
    QPushButton *pb_pBarUp;
    QProgressBar *pBar_bar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(329, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        rb_up = new QRadioButton(groupBox);
        rb_up->setObjectName("rb_up");
        rb_up->setGeometry(QRect(20, 40, 69, 18));
        rb_down = new QRadioButton(groupBox);
        rb_down->setObjectName("rb_down");
        rb_down->setGeometry(QRect(20, 70, 69, 18));

        verticalLayout->addWidget(groupBox);

        cBox_box = new QComboBox(centralwidget);
        cBox_box->setObjectName("cBox_box");

        verticalLayout->addWidget(cBox_box);

        pb_pBarUp = new QPushButton(centralwidget);
        pb_pBarUp->setObjectName("pb_pBarUp");

        verticalLayout->addWidget(pb_pBarUp);

        pBar_bar = new QProgressBar(centralwidget);
        pBar_bar->setObjectName("pBar_bar");
        pBar_bar->setValue(24);

        verticalLayout->addWidget(pBar_bar);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 329, 17));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        rb_up->setText(QCoreApplication::translate("MainWindow", "rb_up", nullptr));
        rb_down->setText(QCoreApplication::translate("MainWindow", "rb_down", nullptr));
        pb_pBarUp->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
