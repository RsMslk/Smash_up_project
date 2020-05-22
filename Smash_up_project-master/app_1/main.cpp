#include "mainwindow.h"

#include <string.h>
#include <QApplication>
#include <QLabel>
#include <QDesktopWidget>
#include <QString>

#include <card.h>
#include <base.h>
#include <player.h>
#include <table.h>


//QString player_nickname = NULL;

Card* pirate1 = new Card("Pirate King", 5, 11, QPixmap(":/images/images/pirate1"));
Card* pirate21 = new Card("Buccaneer", 4, 12, QPixmap(":/images/images/pirate2"));
Card* pirate22 = new Card("Buccaneer", 4, 12, QPixmap(":/images/images/pirate2"));
Card* pirate31 = new Card("Saucy Wench", 3, 13, QPixmap(":/images/images/pirate3"));
Card* pirate32 = new Card("Saucy Wench", 3, 13, QPixmap(":/images/images/pirate3"));
Card* pirate33 = new Card("Saucy Wench", 3, 13, QPixmap(":/images/images/pirate3"));
Card* pirate41 = new Card("First Mate", 2, 14, QPixmap(":/images/images/pirate4"));
Card* pirate42 = new Card("First Mate", 2, 14, QPixmap(":/images/images/pirate4"));
Card* pirate43 = new Card("First Mate", 2, 14, QPixmap(":/images/images/pirate4"));
Card* pirate44 = new Card("First Mate", 2, 14, QPixmap(":/images/images/pirate4"));

Card* dino1 = new Card("King Rex", 7, 21, QPixmap(":/images/images/dino1"));
Card* dino21 = new Card("Laseratops", 4, 22, QPixmap(":/images/images/dino2"));
Card* dino22 = new Card("Laseratops", 4, 22, QPixmap(":/images/images/dino2"));
Card* dino31 = new Card("Armor Stego", 3, 23, QPixmap(":/images/images/howl"));
Card* dino32 = new Card("Armor Stego", 3, 23, QPixmap(":/images/images/howl"));
Card* dino33 = new Card("Armor Stego", 3, 23, QPixmap(":/images/images/howl"));
Card* dino41 = new Card("War Raptor", 2, 24, QPixmap(":/images/images/dino4"));
Card* dino42 = new Card("War Raptor", 2, 24, QPixmap(":/images/images/dino4"));
Card* dino43 = new Card("War Raptor", 2, 24, QPixmap(":/images/images/dino4"));
Card* dino44 = new Card("War Raptor", 2, 24, QPixmap(":/images/images/dino4"));

Card* prank1 = new Card("Leprechaun", 5, 31, QPixmap(":/images/images/poni1"));
Card* prank21 = new Card("Brownie", 4, 32, QPixmap(":/images/images/poni2"));
Card* prank22 = new Card("Brownie", 4, 32, QPixmap(":/images/images/poni2"));
Card* prank31 = new Card("Gnome", 3, 33, QPixmap(":/images/image/poni3"));
Card* prank32 = new Card("Gnome", 3, 33, QPixmap(":/images/images/poni3"));
Card* prank33 = new Card("Gnome", 3, 33, QPixmap(":/images/images/poni3"));
Card* prank41 = new Card("Gremlin", 2, 34, QPixmap(":/images/images/poni4"));
Card* prank42 = new Card("Gremlin", 2, 34, QPixmap(":/images/images/poni4"));
Card* prank43 = new Card("Gremlin", 2, 34, QPixmap(":/images/images/poni4"));
Card* prank44 = new Card("Gremlin", 2, 34, QPixmap(":/images/images/poni4"));

Card* ninja1 = new Card("Ninja Master", 5, 41, QPixmap(":/images/images/ninja1"));
Card* ninja21 = new Card("Tiger Assasin", 4, 42, QPixmap(":/images/images/ninja2"));
Card* ninja22 = new Card("Tiger Assasin", 4, 42, QPixmap(":/images/images/ninja2"));
Card* ninja31 = new Card("Shinobi", 3, 43, QPixmap(":/images/images/ninja3"));
Card* ninja32 = new Card("Shinobi", 3, 43, QPixmap(":/images/images/ninja3"));
Card* ninja33 = new Card("Shinobi", 3, 43, QPixmap(":/images/images/ninja3"));
Card* ninja41 = new Card("Ninja Acolyte", 2, 44, QPixmap(":/images/images/ninja4"));
Card* ninja42 = new Card("Ninja Acolyte", 2, 44, QPixmap(":/images/images/ninja4"));
Card* ninja43 = new Card("Ninja Acolyte", 2, 44, QPixmap(":/images/images/ninja4"));
Card* ninja44 = new Card("Ninja Acolyte", 2, 44, QPixmap(":/images/images/ninja4"));

Base* base1 = new Base("Jungle Oasis", 2, 0, 0, 12, 0);
Base* base2 = new Base("Tar Pits", 4, 3, 2, 16, 1);
Base* base3 = new Base("Ninja Dojo", 2, 3, 2, 18, 2);
Base* base4 = new Base("Temple of Goju", 2, 3, 2, 18, 3);
Base* base5 = new Base("The Grey Opal", 3, 1, 1, 17, 4);
Base* base6 = new Base("Tortuga", 4, 3, 2, 21, 5);
Base* base7 = new Base("Cave of Shinies", 4, 2, 1, 23, 6);
Base* base8 = new Base("Mushroom Kingdom", 5, 3, 2, 20, 7);

Table* table;

extern int number_of_players;
extern int player_0_fr_1, player_0_fr_2, player_1_fr_1, player_1_fr_2;
extern QString player_nickname_mainwindow;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget dw;
    MainWindow w;

    QVector<Card*> pirates = { pirate1, pirate21, pirate22, pirate31, pirate32, pirate33, pirate41, pirate42, pirate43, pirate44 };
    Fraction* Pirates = new Fraction("Pirates", pirates);
    QVector<Card*> dinos = { dino1, dino21, dino22, dino31, dino32, dino33, dino41, dino42, dino43, dino44 };
    Fraction* Dinos = new Fraction("Dinosaurs", dinos);
    QVector<Card*> tricksters = { prank1, prank21, prank22, prank31, prank32, prank33, prank41, prank42, prank43, prank44 };
    Fraction* Tricksters = new Fraction("Tricksters", tricksters);
    QVector<Card*> ninjas = { ninja1, ninja21, ninja22, ninja31, ninja32, ninja33, ninja41, ninja42, ninja43, ninja44 };
    Fraction* Ninjas = new Fraction("Ninjas", ninjas);
    QVector<Base*> all_bases{ base1, base2, base3, base4, base5, base6, base7, base8 };
    QVector<Fraction*> all_fractions{ Pirates, Dinos, Tricksters, Ninjas };
    table = new Table(number_of_players);
    table->creating_bases(all_bases);
    Player* q = new Player(player_nickname_mainwindow, all_fractions[player_0_fr_1], all_fractions[player_0_fr_1], 0);
    all_fractions.erase(all_fractions.begin() + player_0_fr_1);
    all_fractions.erase(all_fractions.begin() + player_0_fr_2);
    table->add_player(q);
    Player* p = new Player("Default", all_fractions[player_1_fr_1], all_fractions[player_1_fr_2], 1);
    table->add_player(p);
    while (table->end_game())
    {
        if (number_of_players!=0)
            table->play_turn %= number_of_players;
        table->place_card_on_base(0, 0);
        Base* p = table->check_capture();
        if (p != nullptr)
        {
            QVector<int> sum_of_scores(number_of_players);
            for (int i = 0; i < p->play_cards.size(); i++)
            {
                sum_of_scores[p->play_cards[i]->player_card] += p->play_cards[i]->power_score;
            }
            int place1 = 0, place2 = 1;
            if (sum_of_scores[place1] < sum_of_scores[place2])
            {
                place2 = 0;
                place1 = 1;
            }
            table->players[place1]->total_score += p->first_place;
            table->players[place2]->total_score += p->second_place;
            table->delete_base(p, all_bases);
        }
        table->play_turn++;
        break;
    }
    for (int i = 0; i < number_of_players; i++)
    {
        if (table->players[i]->total_score >= 15)
        {
            break;
        }
    }
    w.setFixedSize(800,600);
    w.show();

    return a.exec();
}
