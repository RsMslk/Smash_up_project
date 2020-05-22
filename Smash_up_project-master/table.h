#ifndef TABLE_H
#define TABLE_H
#include <player.h>
#include <base.h>
#include <card.h>
#include <QVector>
#include <QString>
#include <QDateTime>
class Table
{
public:
    Table(int n)
    {
        players_amount = n;
        play_turn = 0;

    }
    void add_player(Player* q)
    {
        players.push_back(q);
    }
    void creating_bases(QVector<class Base*>& all_bases)
    {
        int k;
        qsrand(QDateTime::currentMSecsSinceEpoch());
        for (int i = 0; i <= players_amount; i++)
        {
            k = rand() % all_bases.size();
            game_base.push_back(all_bases[k]);
            all_bases.erase(all_bases.begin() + k);
        }
    }
    void delete_base(class Base* p, QVector<class Base*>& all_bases)
    {
        int k;
        qsrand(QDateTime::currentMSecsSinceEpoch());
        int i;
        for (i = 0; i < game_base.size(); i++)
        {
            if (game_base[i] == p)
                break;
        }
        game_base.erase(game_base.begin() + i);
        k = qrand() % all_bases.size();
        game_base.push_back(all_bases[k]);
        all_bases.erase(all_bases.begin() + k);
    }
    bool end_game()
    {
        for (int i = 0; i < players.size(); i++)
        {
            if (players[i]->total_score >= 15)
                return false;
        }
        return true;
    }
    void place_card_on_base(int a, int b)
    {
        int k;
        qsrand(QDateTime::currentMSecsSinceEpoch());
        k = qrand() % players[play_turn]->all_cards.size();
        game_base[b]->add_card(players[play_turn]->hand_list[a]);
        players[play_turn]->hand_list.erase(players[play_turn]->hand_list.begin()+a);
        players[play_turn]->hand_list.push_back(players[play_turn]->all_cards[k]);
    }
    Base* check_capture()
    {
        for (int i = 0; i < game_base.size(); i++)
        {
            if (game_base[i]->sum_score())
            {
                return game_base[i];
            }
        }
        return nullptr;
    }
    QVector<Player*> players;
    int play_turn;
private:
    int players_amount;
    QVector<Base*> game_base;
};
#endif // TABLE_H
