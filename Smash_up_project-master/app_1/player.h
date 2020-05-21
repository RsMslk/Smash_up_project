#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include <QVector>
#include <QDateTime>
#include <card.h>
class Player
{
public:
    Player(QString name, class Fraction* p1, class Fraction* p2, int n)
    {
        total_score = 0;
        nickname = name;
        pick1 = p1;
        pick2 = p2;
        all_cards = p1->cards;
        all_cards.reserve(all_cards.size() + p2->cards.size());
        for (int i = 0; i < p2->cards.size(); i ++)
        {
            all_cards.push_back(p2->cards[i]);
        }
        for (int j = 0; j < all_cards.size(); j++)
        {
            all_cards[j]->player_card = n;
        }
        int k ;
        qsrand(QDateTime::currentMSecsSinceEpoch());
        for (int i = 0; i < 5; i++)
        {
            k = qrand() % all_cards.size();
            hand_list.push_back(all_cards[k]);
            all_cards.erase(all_cards.begin() + k);
        }
    }
    int total_score;
    QString nickname;
    QVector<Card*> hand_list;
    QVector<Card*> all_cards;
private:
    class Fraction* pick1;
    class Fraction* pick2;
    QVector<Card*> reset_list;};
#endif // PLAYER_H
