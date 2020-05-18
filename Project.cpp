#include <string>
#include <vector>
#include <ctime>
#include <iostream>

using namespace std;

#include "Card.h"
#include "Base.h"
#include "Player.h"
#include "Table.h"

void special1();
void special2();
void special3();
void special4();
void act1();
void act2();
void act3();
void act4();
void act5();
void act6();
void act7();
void act8();

bool end_game(Table* table);
bool check_capture(Table* table);

Card* pirate1 = new Card("Pirate King", 5, special1, 0);
Card* pirate21 = new Card("Buccaneer", 4, special2, 0);
Card* pirate22 = new Card("Buccaneer", 4, special2, 0);
Card* pirate31 = new Card("Saucy Wench", 3, special3, 0);
Card* pirate32 = new Card("Saucy Wench", 3, special3, 0);
Card* pirate33 = new Card("Saucy Wench", 3, special3, 0);
Card* pirate41 = new Card("First Mate", 2, special4, 0);
Card* pirate42 = new Card("First Mate", 2, special4, 0);
Card* pirate43 = new Card("First Mate", 2, special4, 0);
Card* pirate44 = new Card("First Mate", 2, special4, 0);
Card* action1 = new Card("Dinghy", 0, act1, 1);
Card* action2 = new Card("Broadside", 0, act2, 1);
Card* action3 = new Card("Shanghai", 0, act3, 1);
Card* action4 = new Card("Powderkeg", 0, act4, 1);
Card* action5 = new Card("Swashbuckling", 0, act5, 1);
Card* action6 = new Card("Cannon", 0, act6, 1);
Card* action7 = new Card("Full Sail", 0, act7, 1);
Card* action8 = new Card("Sea Dogs", 0, act8, 1);

Card* dino1 = new Card("King Rex", 7, special1, 0);
Card* dino21 = new Card("Laseratops", 4, special2, 0);
Card* dino22 = new Card("Laseratops", 4, special2, 0);
Card* dino31 = new Card("Armor Stego", 3, special3, 0);
Card* dino32 = new Card("Armor Stego", 3, special3, 0);
Card* dino33 = new Card("Armor Stego", 3, special3, 0);
Card* dino41 = new Card("War Raptor", 2, special4, 0);
Card* dino42 = new Card("War Raptor", 2, special4, 0);
Card* dino43 = new Card("War Raptor", 2, special4, 0);
Card* dino44 = new Card("War Raptor", 2, special4, 0);
Card* actio1 = new Card("Augmentation", 0, act1, 1);
Card* actio2 = new Card("Howl", 0, act2, 1);
Card* actio3 = new Card("Natural Selection", 0, act3, 1);
Card* actio4 = new Card("Upgrade", 0, act4, 1);
Card* actio5 = new Card("Tooth and Claw... and Guns", 0, act5, 1);
Card* actio6 = new Card("Survival of the Fittest", 0, act6, 1);
Card* actio7 = new Card("Wildlife Preserve", 0, act7, 1);
Card* actio8 = new Card("Rampage", 0, act8, 1);

Card* prank1 = new Card("Leprechaun", 5, special1, 0);
Card* prank21 = new Card("Brownie", 4, special2, 0);
Card* prank22 = new Card("Brownie", 4, special2, 0);
Card* prank31 = new Card("Gnome", 3, special3, 0);
Card* prank32 = new Card("Gnome", 3, special3, 0);
Card* prank33 = new Card("Gnome", 3, special3, 0);
Card* prank41 = new Card("Gremlin", 2, special4, 0);
Card* prank42 = new Card("Gremlin", 2, special4, 0);
Card* prank43 = new Card("Gremlin", 2, special4, 0);
Card* prank44 = new Card("Gremlin", 2, special4, 0);
Card* acti1 = new Card("Disenchant", 0, act1, 1);
Card* acti2 = new Card("Enshrouding Mist", 0, act2, 1);
Card* acti3 = new Card("Pay the Piper", 0, act3, 1);
Card* acti4 = new Card("Mark of Sleep", 0, act4, 1);
Card* acti5 = new Card("Block the Path", 0, act5, 1);
Card* acti6 = new Card("Take the Shinies", 0, act6, 1);
Card* acti7 = new Card("Flame Trap", 0, act7, 1);
Card* acti8 = new Card("Hideout", 0, act8, 1);

Card* ninja1 = new Card("Ninja Master", 5, special1, 0);
Card* ninja21 = new Card("Tiger Assasin", 4, special2, 0);
Card* ninja22 = new Card("Tiger Assasin", 4, special2, 0);
Card* ninja31 = new Card("Shinobi", 3, special3, 0);
Card* ninja32 = new Card("Shinobi", 3, special3, 0);
Card* ninja33 = new Card("Shinobi", 3, special3, 0);
Card* ninja41 = new Card("Ninja Acolyte", 2, special4, 0);
Card* ninja42 = new Card("Ninja Acolyte", 2, special4, 0);
Card* ninja43 = new Card("Ninja Acolyte", 2, special4, 0);
Card* ninja44 = new Card("Ninja Acolyte", 2, special4, 0);
Card* acti11 = new Card("Seeing Stars", 0, act1, 1);
Card* acti21 = new Card("Infiltrate", 0, act2, 1);
Card* acti31 = new Card("Poison", 0, act3, 1);
Card* acti41 = new Card("Disguise", 0, act4, 1);
Card* acti51 = new Card("Assassination", 0, act5, 1);
Card* acti61 = new Card("Hidden Ninja", 0, act6, 1);
Card* acti71 = new Card("Way of Deception", 0, act7, 1);
Card* acti81 = new Card("Smoke Bomb", 0, act8, 1);

Base* base1 = new Base("Jungle Oasis", 2, 0, 0, 12);
Base* base2 = new Base("Tar Pits", 4, 3, 2, 16);
Base* base3 = new Base("Ninja Dojo", 2, 3, 2, 18);
Base* base4 = new Base("Temple of Goju", 2, 3, 2, 18);
Base* base5 = new Base("The Grey Opal", 3, 1, 1, 17);
Base* base6 = new Base("Tortuga", 4, 3, 2, 21);
Base* base7 = new Base("Cave of Shinies", 4, 2, 1, 23);
Base* base8 = new Base("Mushroom Kingdom", 5, 3, 2, 20);

int main()
{
	vector<Card*> pirates = { pirate1, pirate21, pirate22, pirate31, pirate32, pirate33, pirate41, pirate42, pirate43, pirate44 };
	Fraction* Pirates = new Fraction("Pirates", pirates);
	vector<Card*> dinos = { dino1, dino21, dino22, dino31, dino32, dino33, dino41, dino42, dino43, dino44 };
	Fraction* Dinos = new Fraction("Dinosaurs", dinos);
	vector<Card*> tricksters = { prank1, prank21, prank22, prank31, prank32, prank33, prank41, prank42, prank43, prank44 };
	Fraction* Tricksters = new Fraction("Tricksters", tricksters);
	vector<Card*> ninjas = { ninja1, ninja21, ninja22, ninja31, ninja32, ninja33, ninja41, ninja42, ninja43, ninja44 };
	Fraction* Ninjas = new Fraction("Ninjas", ninjas);
	vector<Base*> all_bases{ base1, base2, base3, base4, base5, base6, base7, base8 };
	vector<Fraction*> all_fractions{ Pirates, Dinos, Tricksters, Ninjas };
	cout << "Enter number of players:\n";
	int N, n1, n2;
	string s;
	cin >> N;
	Table* table = new Table(N);
	table->creating_bases(all_bases);
	for (int i = 0; i < N; i++)
	{
		cout << "Enter nickname of player N" << i+1 << "\n";
		cin >> s;
		cout << "This is the list of available factions:\n";
		for (unsigned int j = 0; j < all_fractions.size(); j++)
		{
			cout << j + 1 << ". " << all_fractions[j]->name_fraction << "\n";
		}
		cout << "Enter factions:\n";
		cin >> n1 >> n2;
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
		//end_game(table);
		table->print_bases();
		cout << table->players[table->play_turn]->nickname << ", you may go! Choose one card in your hand:\n";
		table->players[table->play_turn]->print_hand();
		cin >> n1;
		cout << "Choose base on which you want place your card:\n";
		cin >> n2;
		n1--;
		n2--;
		table->place_card_on_base(n1, n2);
		Base* p = table->check_capture();
		if (p != nullptr)
		{
			cout << p->name_base <<" is ready to be captured.\n";
			//Этап до захвата базы
			for (int i = 0; i < p->play_cards.size(); i++)
			{
				vector<int> sum_of_scores(N);
				if (p->play_cards[i]->type == 0)
				{
					sum_of_scores[p->play_cards[i]->player_card] += p->play_cards[i]->power_score;
				}
			}
			for (int i = 0; i < N; i++)
			{

			}
			//Этап после захвата базы
		}
		table->play_turn++;
	}
	return 0;
}


void special1()
{
}

void special2()
{
}

void special3()
{
}

void special4()
{
}

void act1()
{
}

void act2()
{
}

void act3()
{
}

void act4()
{
}

void act5()
{
}

void act6()
{
}

void act7()
{
}

void act8()
{
}
