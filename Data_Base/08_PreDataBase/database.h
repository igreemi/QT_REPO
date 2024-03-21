#ifndef DATABASE_H
#define DATABASE_H

#include <QTableWidget>
#include <QObject>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlError>



#define POSTGRE_DRIVER "QPSQL"
#define DB_NAME "MyDB"

//Количество полей данных необходимых для подключения к БД
#define NUM_DATA_FOR_CONNECT_TO_DB 5

//Перечисление полей данных
enum fieldsForConnect{
    hostName = 0,
    dbName = 1,
    login = 2,
    pass = 3,
    port = 4
};

//Типы запросов
enum requestType{

    requestAllFilms = 1,
    requestComedy   = 2,
    requestHorrors  = 3

};



class DataBase : public QObject
{
    Q_OBJECT

public:
    explicit DataBase(QObject *parent = nullptr);
    ~DataBase();

    void AddDataBase(QString driver, QString nameDB = "");
    void DisconnectFromDataBase(QString nameDb = "");
    QSqlError GetLastError(void);
    void ConnectToDataBase(QVector<QString> dataForConnect);
    void ClearTable();
    void ReadAnswerFromDB( int answerType );


signals:

   void sig_SendDataFromDB(QTableView *tableVw);
   void sig_SendStatusConnection(bool);



private:

    QSqlDatabase *dataBase;
    QSqlTableModel *model;
    QSqlQueryModel *qModel;
    QTableView *tView;

};

#endif // DATABASE_H
