#ifndef CARD_H
#define CARD_H
#include <QString>
#include <QVector>
class Card
{
public:
    Card(QString name, int score, int i)
    {
        name_card = name;
        power_score = score;
        id = i;
    }
    QString name_card;
    int power_score;
    int player_card;
    int id;
private:
};

class Fraction
{
public:
    Fraction(QString name, QVector<Card*> c)
    {
        name_fraction = name;
        cards = c;
    }
    QVector<Card*> cards;
    QString name_fraction;
private:
};
#endif // CARD_H
