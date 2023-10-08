#include "udpworker.h"

UDPworker::UDPworker(QObject *parent) : QObject(parent)
{



}


/*!
 * @brief Метод инициализирует UDP сервер
 */
void UDPworker::InitSocket()
{
    serviceUdpSocket = new QUdpSocket(this);
    /*
     * Соединяем присваиваем адрес и порт серверу и соединяем функцию
     * обраотчик принятых пакетов с сокетом
     */
    serviceUdpSocket->bind(QHostAddress::LocalHost, BIND_PORT);

    connect(serviceUdpSocket, &QUdpSocket::readyRead, this, &UDPworker::readPendingDatagrams);

    messageUdpSocket = new QUdpSocket(this);

    messageUdpSocket->bind(QHostAddress::LocalHost, BIND_PORT2);

    connect(messageUdpSocket, &QUdpSocket::readyRead, this, &UDPworker::readPendingDatagrams);
}

/*!
 * @brief Метод осуществляет обработку принятой датаграммы
 */
void UDPworker::ReadDatagram(QNetworkDatagram datagram)
{
    QByteArray data;
    data = datagram.data();

    QDataStream inStr(&data, QIODevice::ReadOnly);
    QDateTime dateTime;
    inStr >> dateTime;

    emit sig_sendTimeToGUI(dateTime);
}

void UDPworker::ReadDatagramMsg(QNetworkDatagram datagram)
{
    QByteArray data;
    data = datagram.data();

    QDataStream inStr(&data, QIODevice::ReadOnly);
    QString msg;;
    inStr >> msg;
    size_t s = sizeof(msg.toUtf8());

    emit sig_sendMsgToGUI("Принято сообщение от " + datagram.senderAddress().toString()
                          +  ", размер сообщения(байт): "
                          + QString::number(s));
}
/*!
 * @brief Метод осуществляет опередачу датаграммы
 */
void UDPworker::SendDatagram(QByteArray data)
{
    /*
     *  Отправляем данные на localhost и задефайненный порт
     */
    serviceUdpSocket->writeDatagram(data, QHostAddress::LocalHost, BIND_PORT);
}

void UDPworker::SendDatagramMsg(QByteArray data)
{
    messageUdpSocket->writeDatagram(data, QHostAddress::LocalHost, BIND_PORT2);
}

/*!
 * @brief Метод осуществляет чтение датаграм из сокета
 */
void UDPworker::readPendingDatagrams( void )
{
    /*
     *  Производим чтение принятых датаграмм
     */
    if(sender() == serviceUdpSocket)
    {
        while(serviceUdpSocket->hasPendingDatagrams())
        {
                QNetworkDatagram datagram = serviceUdpSocket->receiveDatagram();
                ReadDatagram(datagram);
        }
    }
    else if(sender() == messageUdpSocket)
    {
        while(messageUdpSocket->hasPendingDatagrams())
        {
                QNetworkDatagram datagram = messageUdpSocket->receiveDatagram();
                ReadDatagramMsg(datagram);
        }
    }

}

