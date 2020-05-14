#pragma once
#ifndef PLAYER_H
#define PLAYER_H
class Player
{
public:
	Player(string name, class Fraction* p1, class Fraction* p2)
	{
		total_score = 0;
		nickname = name;
		pick1 = p1;
		pick2 = p2;
		all_cards = p1->cards;
		all_cards.reserve(all_cards.size() + p2->cards.size());
		all_cards.insert(all_cards.end(), p2->cards.begin(), p2->cards.end());
		int k ;
		srand(time(0));
		for (int i = 0; i < 5; i++)
		{
			k = rand() % all_cards.size();
			hand_list.push_back(all_cards[k]);
			all_cards.erase(all_cards.begin() + k);
		}
	}
	void print_hand()
	{
		for (unsigned int i = 0; i < hand_list.size(); i++)
		{
			cout << i + 1 << ". " << hand_list[i]->name_card << "\n";
		}
	}
	int total_score;
	string nickname;
	vector<Card*> hand_list;
private:
	class Fraction* pick1;
	class Fraction* pick2;
	vector<Card*> all_cards;
	vector<Card*> reset_list;
};
#endif // !PLAYER.H
