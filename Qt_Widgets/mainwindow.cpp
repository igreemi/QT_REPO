#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

ui->pBar_count->setMaximum(10);
ui->pBar_count->setMinimum(0);
ui->pBar_count->setValue(0);

ui->pb_upPbar->setText("Счетчик");
ui->rb_on->setText("Вкл. счетчик");
ui->rb_off->setText("Выкл. счетчик");

for(int i = 0; i < 10; i++)
{
    ui->cBox_list->addItem("Элемент: " + QString::number(i));
}

ui->pb_upPbar->setCheckable(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_upPbar_clicked()
{
    if(ui->rb_on->isChecked() && ui->pb_upPbar->isChecked())
    {
    if(ui->pBar_count->value() == 10)
    {
        ui->pBar_count->setValue(0);
        count = 0;
    }
    else
    {
        ++count;
        ui->pBar_count->setValue(count);
    }
    }
}


