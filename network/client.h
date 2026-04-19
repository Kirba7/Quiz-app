#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>

class Client
{
public:
    Client();

    void connectToHost();
    void sendMessage();
    void disconnect();

signals:
    void messageRecieved();
    void connected();
    void disconnected();
};

#endif // CLIENT_H
