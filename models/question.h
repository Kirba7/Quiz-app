#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QStringList>

class Question
{
    int id;
    QString text;
    QStringList options;
    int correctAnswer;
    int timeLimit;

public:
    Question();

    int getId() const;
    void setId(int newId);

    QString getText() const;
    void setText(const QString &newText);

    QStringList getOptions() const;
    void setOptions(const QStringList &newOptions);

    int getCorrectAnswer() const;
    void setCorrectAnswer(int newCorrectAnswer);

    int getTimeLimit() const;
    void setTimeLimit(int newTimeLimit);
};

#endif // QUESTION_H
