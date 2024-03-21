#include "database.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent}
{
    model = new QSqlTableModel();
    qModel = new QSqlQueryModel();
    dataBase = new QSqlDatabase();
    tView = new QTableView();
}

DataBase::~DataBase()
{
    delete model;
    delete qModel;
    delete dataBase;
}

/*!
 * \brief Метод добавляет БД к экземпляру класса QSqlDataBase
 * \param driver драйвер БД
 * \param nameDB имя БД (Если отсутствует Qt задает имя по умолчанию)
 */
void DataBase::AddDataBase(QString driver, QString nameDB)
{
    *dataBase = QSqlDatabase::addDatabase(driver, nameDB);
}

/*!
 * \brief Метод подключается к БД
 * \param для удобства передаем контейнер с данными необходимыми для подключения
 * \return возвращает тип ошибки
 */
void DataBase::ConnectToDataBase(QVector<QString> data)
{
    dataBase->setHostName(data[hostName]);
    dataBase->setDatabaseName(data[dbName]);
    dataBase->setUserName(data[login]);
    dataBase->setPassword(data[pass]);
    dataBase->setPort(data[port].toInt());

    bool status;
    status = dataBase->open( );
    emit sig_SendStatusConnection(status);
}

/*!
 * \brief Метод производит отключение от БД
 * \param Имя БД
 */
void DataBase::DisconnectFromDataBase(QString nameDb)
{
    *dataBase = QSqlDatabase::database(nameDb);
    dataBase->close();
}


/*!
 * @brief Метод возвращает последнюю ошибку БД
 */
QSqlError DataBase::GetLastError()
{
    return dataBase->lastError();
}

void DataBase::ClearTable()
{
    if(model->columnCount() > 0)
    {
        model->clear();
    }

    if(qModel->columnCount() > 0)
    {
        qModel->clear();
    }

    tView->setModel(model);

    emit sig_SendDataFromDB(tView);
}

void DataBase::ReadAnswerFromDB(int requestType)
{
    switch (requestType) {

    case requestHorrors:
    {
        QString request = "SELECT title, description FROM film f "
                          "JOIN film_category fc on f.film_id = fc.film_id "
                          "JOIN category c on c.category_id = fc.category_id WHERE c.name = 'Horror'";

        qModel = new QSqlQueryModel(this);

        qModel->setQuery(request, *dataBase);

        qModel->setHeaderData(0, Qt::Horizontal, tr("Название фильма"));
        qModel->setHeaderData(1, Qt::Horizontal, tr("Описание фильма"));

        tView->setModel(qModel);

        emit sig_SendDataFromDB(tView);

        break;
    }
    case requestComedy:
    {
        QString request = "SELECT title, description FROM film f "
                          "JOIN film_category fc on f.film_id = fc.film_id "
                          "JOIN category c on c.category_id = fc.category_id WHERE c.name = 'Comedy'";

        qModel = new QSqlQueryModel(this);

        qModel->setQuery(request, *dataBase);

        qModel->setHeaderData(0, Qt::Horizontal, tr("Название фильма"));
        qModel->setHeaderData(1, Qt::Horizontal, tr("Описание фильма"));

        tView->setModel(qModel);

        emit sig_SendDataFromDB(tView);

        break;
    }
    case requestAllFilms:
    {
        model = new QSqlTableModel(this, *dataBase);

        model->setTable("film");

        model->removeColumn(0);
        model->removeColumns(2, model->columnCount() - 2);

        model->setHeaderData(0, Qt::Horizontal, tr("Название фильма"));
        model->setHeaderData(1, Qt::Horizontal, tr("Описание фильма"));

        model->select();

        tView->setModel(model);

        emit sig_SendDataFromDB(tView);

        break;
    }

    default:
        break;
    }

}
