#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QJsonObject>

class Message
{
    QString type;
    QJsonObject payload;

public:
    Message();
};

#endif // MESSAGE_H
