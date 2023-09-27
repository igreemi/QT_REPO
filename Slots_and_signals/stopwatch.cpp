#include "stopwatch.h"

Stopwatch::Stopwatch(QObject *parent) : QObject{parent} {
  ms = 0;
  s = 0;
  m = 0;

  c_ms = 0;
  c_s = 0;
  c_m = 0;

  circle_count = 0;

  timer = new QTimer(this);

  connect(timer, &QTimer::timeout, this, &Stopwatch::SendTimerSlot);
}

void Stopwatch::SendTimerSlot() {
  TotalTime();
  LapTime();
  emit sig_SendTimerSig(QString::number(m) + ":" + QString::number(s) + ":" +
                        QString::number(ms / 100));
}

void Stopwatch::CircleCounter() {
  circle_count++;
  emit sig_SendCircleCounter("Круг: " + QString::number(circle_count) + " " +
                             "Время: " + QString::number(c_m) + ":" +
                             QString::number(c_s) + ":" +
                             QString::number(c_ms / 100));
  c_ms = 0;
  c_s = 0;
  c_m = 0;
}

void Stopwatch::ClearTimer() {
  ms = 0;
  s = 0;
  m = 0;
  c_ms = 0;
  c_s = 0;
  c_m = 0;
  circle_count = 0;
  emit sig_ClearTimerSig(QString::number(m) + ":" + QString::number(s) + ":" +
                         QString::number(ms));
}

void Stopwatch::TimerStart() { timer->start(1); }

void Stopwatch::TimerStop() { timer->stop(); }

void Stopwatch::TotalTime() {
  ms++;
  if (ms >= 1000) {
    ms = 0;
    s++;
  }
  if (s >= 60) {
    s = 0;
    m++;
  }
}

void Stopwatch::LapTime() {
  c_ms++;
  if (c_ms >= 1000) {
    c_ms = 0;
    c_s++;
  }
  if (c_s >= 60) {
    c_s = 0;
    c_m++;
  }
}
