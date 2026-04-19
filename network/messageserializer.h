#ifndef MESSAGESERIALIZER_H
#define MESSAGESERIALIZER_H

#include "message.h"
#include <QByteArray>

class MessageSerializer
{
public:
    MessageSerializer();

    QByteArray serialize(const Message& msg);
    Message deserialize(const QByteArray& arr);
};

#endif // MESSAGESERIALIZER_H
