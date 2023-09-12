#include <QCoreApplication>
#include <QNetworkInterface>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkInterface interface;

    QSqlDatabase db;

    return a.exec();
}
