#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMessageBox msg;

    msg.setText("Test");
    msg.setIcon(QMessageBox::Information);
    msg.setStyleSheet("color : red");
    msg.show();

    return a.exec();
}
