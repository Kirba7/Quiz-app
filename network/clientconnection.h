#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include <QTcpSocket>

class ClientConnection
{
    QTcpSocket* socket;
    int playerId;

public:
    ClientConnection();

    void sendMessage();
};

#endif // CLIENTCONNECTION_H
