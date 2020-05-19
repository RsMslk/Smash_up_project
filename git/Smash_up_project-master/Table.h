#pragma once
#ifndef TABLE_H
#define TABLE_H
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
	void creating_bases(vector<class Base*> all_bases)
	{
		int k;
		srand(time(0));
		for (int i = 0; i <= players_amount; i++)
		{
			k = rand() % all_bases.size();
			game_base.push_back(all_bases[k]);
			all_bases.erase(all_bases.begin() + k);
		}
	}
	bool end_game()
	{
		for (unsigned int i = 0; i < players.size(); i++)
		{
			if (players[i]->total_score >= 15)
				return false;
		}
		return true;
	}
	void print_bases()
	{
		cout << "This is list of available bases:\n";
		for (unsigned int i = 0; i < game_base.size(); i++)
		{
			cout << i + 1<< ". " << game_base[i]->name_base << "\n";
		}
	}
	void place_card_on_base(int a, int b)
	{
		int k;
		srand(time(0));
		k = rand() % players[play_turn]->all_cards.size();
		game_base[b]->add_card(players[play_turn]->hand_list[a]);
		players[play_turn]->hand_list.erase(players[play_turn]->hand_list.begin()+a);
		players[play_turn]->hand_list.push_back(players[play_turn]->all_cards[k]);
	}
	Base* check_capture()
	{
		for (unsigned int i = 0; i < game_base.size(); i++)
		{
			if (game_base[i]->sum_score())
			{
				return game_base[i];
			}
		}
		return nullptr;
	}
	vector<Player*> players;
	int play_turn;
private:
	int players_amount;
	vector<Base*> game_base;
};
#endif // !TABLE_H
