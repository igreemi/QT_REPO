#include "mainwindow.h"

#include <QApplication>
#include <QNetworkInterface>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QNetworkInterface interface;

    QSqlDatabase db;

    return a.exec();
}
