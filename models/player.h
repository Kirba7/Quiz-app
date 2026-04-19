#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

class Player
{
    int id;
    QString nickname;
    int score = 0;
public:
    Player();

    int getId() const;
    void setId(int newId);

    QString getNickname() const;
    void setNickname(const QString &newNickname);

    int getScore() const;
    void setScore(int newScore);
};

#endif // PLAYER_H
