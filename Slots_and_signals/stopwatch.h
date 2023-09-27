#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QObject>
#include <QTimer>

class Stopwatch : public QObject {
  Q_OBJECT
public:
  explicit Stopwatch(QObject *parent = nullptr);

  void CircleCounter();
  void ClearTimer();
  void TimerStart();
  void TimerStop();

private:
  QTimer *timer;

  int ms, s, m, c_ms, c_s, c_m;
  int circle_count;

  void TotalTime();
  void LapTime();

signals:
  void sig_SendTimerSig(QString str);
  void sig_ClearTimerSig(QString str);
  void sig_SendCircleCounter(QString str);

private slots:
  void SendTimerSlot();
};

#endif // STOPWATCH_H
