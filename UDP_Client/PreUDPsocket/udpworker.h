#ifndef UDPWORKER_H
#define UDPWORKER_H

#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QDateTime>


#define BIND_PORT 12345
#define BIND_PORT2 54321

class UDPworker : public QObject
{
    Q_OBJECT
public:
    explicit UDPworker(QObject *parent = nullptr);
    void InitSocket( void );
    void ReadDatagram( QNetworkDatagram datagram);
    void ReadDatagramMsg( QNetworkDatagram datagram);
    void SendDatagram(QByteArray data );
    void SendDatagramMsg(QByteArray data );


private slots:
    void readPendingDatagrams(void);

private:
    QUdpSocket* serviceUdpSocket;
    QUdpSocket* messageUdpSocket;

signals:
    void sig_sendTimeToGUI(QDateTime data);
    void sig_sendMsgToGUI(QString data);

};

#endif // UDPWORKER_H
