#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "stopwatch.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_pb_start_stop_clicked();

  void timerSlot(QString str);

  void on_pb_clear_clicked();

  void timerClearSlot(QString str);

  void CircleCounterSlot(QString str);

  void on_pb_circle_clicked();

private:
  Ui::MainWindow *ui;
  Stopwatch *stop_watch;
  bool start_chek;
};
#endif // MAINWINDOW_H
