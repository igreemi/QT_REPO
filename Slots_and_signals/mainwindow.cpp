#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  stop_watch = new Stopwatch(this);

  ui->lb_timer->setText("0:0:0");
  ui->pb_start_stop->setText("Старт");
  ui->pb_circle->setText("Круг");
  ui->pb_clear->setText("Очистить");
  ui->pb_circle->setEnabled(false);

  start_chek = true;

  connect(stop_watch, &Stopwatch::sig_SendTimerSig, this,
          &MainWindow::timerSlot);
  connect(stop_watch, &Stopwatch::sig_ClearTimerSig, this,
          &MainWindow::timerClearSlot);
  connect(stop_watch, &Stopwatch::sig_SendCircleCounter, this,
          &MainWindow::CircleCounterSlot);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pb_start_stop_clicked() {
  if (start_chek) {
    ui->pb_start_stop->setText("Стоп");
    stop_watch->TimerStart();
    ui->pb_circle->setEnabled(true);
    start_chek = false;
  } else if (!start_chek) {
    ui->pb_start_stop->setText("Старт");
    stop_watch->TimerStop();
    ui->pb_circle->setEnabled(false);
    start_chek = true;
  }
}

void MainWindow::timerSlot(QString str) { ui->lb_timer->setText(str); }

void MainWindow::on_pb_clear_clicked() { stop_watch->ClearTimer(); }

void MainWindow::timerClearSlot(QString str) { ui->lb_timer->setText(str); }

void MainWindow::CircleCounterSlot(QString str) {
  ui->tB_circleNum->append(str);
}

void MainWindow::on_pb_circle_clicked() { stop_watch->CircleCounter(); }
