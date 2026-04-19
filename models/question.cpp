#include "question.h"

int Question::getId() const
{
    return id;
}

void Question::setId(int newId)
{
    id = newId;
}

QString Question::getText() const
{
    return text;
}

void Question::setText(const QString &newText)
{
    text = newText;
}

QStringList Question::getOptions() const
{
    return options;
}

void Question::setOptions(const QStringList &newOptions)
{
    options = newOptions;
}

int Question::getCorrectAnswer() const
{
    return correctAnswer;
}

void Question::setCorrectAnswer(int newCorrectAnswer)
{
    correctAnswer = newCorrectAnswer;
}

int Question::getTimeLimit() const
{
    return timeLimit;
}

void Question::setTimeLimit(int newTimeLimit)
{
    timeLimit = newTimeLimit;
}

Question::Question() {}
