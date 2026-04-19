#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>

class Server
{
public:
    Server();

    void startServer();
    void stopServer();
    void broadcast();
};

#endif // SERVER_H
