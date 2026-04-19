#include "player.h"

int Player::getId() const
{
    return id;
}

void Player::setId(int newId)
{
    id = newId;
}

QString Player::getNickname() const
{
    return nickname;
}

void Player::setNickname(const QString &newNickname)
{
    nickname = newNickname;
}

int Player::getScore() const
{
    return score;
}

void Player::setScore(int newScore)
{
    score = newScore;
}

Player::Player() {}
