#ifndef HANGMANLOGIC_H
#define HANGMANLOGIC_H

#include<QObject>
#include<QString>

class HangmanLogic : public QObject
{
    QString melding;
    QString gjemtmelding;


public:
    HangmanLogic();

};

#endif // HANGMANLOGIC_H
