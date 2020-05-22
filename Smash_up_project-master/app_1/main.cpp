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

Card* pirate1 = new Card("Pirate King", 5);
Card* pirate21 = new Card("Buccaneer", 4);
Card* pirate22 = new Card("Buccaneer", 4);
Card* pirate31 = new Card("Saucy Wench", 3);
Card* pirate32 = new Card("Saucy Wench", 3);
Card* pirate33 = new Card("Saucy Wench", 3);
Card* pirate41 = new Card("First Mate", 2);
Card* pirate42 = new Card("First Mate", 2);
Card* pirate43 = new Card("First Mate", 2);
Card* pirate44 = new Card("First Mate", 2);

Card* dino1 = new Card("King Rex", 7);
Card* dino21 = new Card("Laseratops", 4);
Card* dino22 = new Card("Laseratops", 4);
Card* dino31 = new Card("Armor Stego", 3);
Card* dino32 = new Card("Armor Stego", 3);
Card* dino33 = new Card("Armor Stego", 3);
Card* dino41 = new Card("War Raptor", 2);
Card* dino42 = new Card("War Raptor", 2);
Card* dino43 = new Card("War Raptor", 2);
Card* dino44 = new Card("War Raptor", 2);

Card* prank1 = new Card("Leprechaun", 5);
Card* prank21 = new Card("Brownie", 4);
Card* prank22 = new Card("Brownie", 4);
Card* prank31 = new Card("Gnome", 3);
Card* prank32 = new Card("Gnome", 3);
Card* prank33 = new Card("Gnome", 3);
Card* prank41 = new Card("Gremlin", 2);
Card* prank42 = new Card("Gremlin", 2);
Card* prank43 = new Card("Gremlin", 2);
Card* prank44 = new Card("Gremlin", 2);

Card* ninja1 = new Card("Ninja Master", 5);
Card* ninja21 = new Card("Tiger Assasin", 4);
Card* ninja22 = new Card("Tiger Assasin", 4);
Card* ninja31 = new Card("Shinobi", 3);
Card* ninja32 = new Card("Shinobi", 3);
Card* ninja33 = new Card("Shinobi", 3);
Card* ninja41 = new Card("Ninja Acolyte", 2);
Card* ninja42 = new Card("Ninja Acolyte", 2);
Card* ninja43 = new Card("Ninja Acolyte", 2);
Card* ninja44 = new Card("Ninja Acolyte", 2);

Base* base1 = new Base("Jungle Oasis", 2, 0, 0, 12, 0);
Base* base2 = new Base("Tar Pits", 4, 3, 2, 16, 1);
Base* base3 = new Base("Ninja Dojo", 2, 3, 2, 18, 2);
Base* base4 = new Base("Temple of Goju", 2, 3, 2, 18, 3);
Base* base5 = new Base("The Grey Opal", 3, 1, 1, 17, 4);
Base* base6 = new Base("Tortuga", 4, 3, 2, 21, 5);
Base* base7 = new Base("Cave of Shinies", 4, 2, 1, 23, 6);
Base* base8 = new Base("Mushroom Kingdom", 5, 3, 2, 20, 7);

Table* table;

int N=2, n1=1, n2=2; //N-количество игроков, n1, n2 - выбор фракций

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget dw;
    MainWindow w;

   /* QVector<Card*> pirates = { pirate1, pirate21, pirate22, pirate31, pirate32, pirate33, pirate41, pirate42, pirate43, pirate44 };
    Fraction* Pirates = new Fraction("Pirates", pirates);
    QVector<Card*> dinos = { dino1, dino21, dino22, dino31, dino32, dino33, dino41, dino42, dino43, dino44 };
    Fraction* Dinos = new Fraction("Dinosaurs", dinos);
    QVector<Card*> tricksters = { prank1, prank21, prank22, prank31, prank32, prank33, prank41, prank42, prank43, prank44 };
    Fraction* Tricksters = new Fraction("Tricksters", tricksters);
    QVector<Card*> ninjas = { ninja1, ninja21, ninja22, ninja31, ninja32, ninja33, ninja41, ninja42, ninja43, ninja44 };
    Fraction* Ninjas = new Fraction("Ninjas", ninjas);
    QVector<Base*> all_bases{ base1, base2, base3, base4, base5, base6, base7, base8 };
    QVector<Fraction*> all_fractions{ Pirates, Dinos, Tricksters, Ninjas };
    QString s;
    table = new Table(N);
    table->creating_bases(all_bases);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < all_fractions.size(); j++)
        {
            //cout << j + 1 << ". " << all_fractions[j]->name_fraction << "\n";
        }
        //cout << "Enter factions:\n";
        //cin >> n1 >> n2;
        n1--;
        n2--;
        Player* q = new Player(s, all_fractions[n1], all_fractions[n2], i);
        all_fractions.erase(all_fractions.begin() + n1);
        n2--;
        all_fractions.erase(all_fractions.begin() + n2);
        table->add_player(q);
    }
    while (table->end_game())
    {
        if (N!=0)
            table->play_turn %= N;
        //cout << table->players[table->play_turn]->nickname << ", you may go! Choose one card in your hand:\n";
        //table->players[table->play_turn]->print_hand();
        //cin >> n1;
        //cout << "Choose base on which you want place your card:\n";
        //cin >> n2;
        n1--;
        n2--;
        table->place_card_on_base(n1, n2);
        Base* p = table->check_capture();
        if (p != nullptr)
        {
            //cout << p->name_base <<" is ready to be captured.\n";
            //Этап до захвата базы
            QVector<int> sum_of_scores(N);
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
            //cout << table->players[place1]->nickname << " gets " << p->first_place << " points.\n";
            table->players[place2]->total_score += p->second_place;
            //cout << table->players[place2]->nickname << " gets " << p->second_place << " points.\n";
            //cout << p->name_base << " was captured.\n";
            //Этап после захвата базы
            table->delete_base(p, all_bases);
        }
        table->play_turn++;
    }
    for (int i = 0; i < N; i++)
    {
        if (table->players[i]->total_score >= 15)
        {
            //cout << table->players[i]->nickname << " is a winner!\n";
            break;
        }
    }*/

    w.setFixedSize(800,600);
    w.show();

    return a.exec();
}
