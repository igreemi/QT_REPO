#include "dialog.h"
#include "database.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->le_hostName->setText("981757-ca08998.tmweb.ru");
    ui->le_dbName->setText("netology_cpp");
    ui->le_login->setText("netology_usr_cpp");
    ui->le_pass->setText("CppNeto3");
    ui->sb_portDb->setValue(5432);

    data.resize(NUM_DATA_FOR_CONNECT_TO_DB);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pb_ok_clicked()
{
    data[hostName] = ui->le_hostName->text();
    data[dbName] = ui->le_dbName->text();
    data[login] = ui->le_login->text();
    data[pass] = ui->le_pass->text();
    data[port] = ui->sb_portDb->text();

    emit sig_sendData(data);
}

