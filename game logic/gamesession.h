#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "models/player.h"
#include "models/question.h"

#include <QVector>

class Gamesession
{
    QVector<Player> players;
    QVector<Question> questions;
    int currentQuestionIndex;

public:
    Gamesession();

    void startGame();
    void submitAnswer();
    void nextQuestion();
    int calculateScores();
};

#endif // GAMESESSION_H
