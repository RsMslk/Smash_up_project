#pragma once
#ifndef BASE_H
#define BASE_H
class Base
{
public:
	Base(string name, int f, int s, int f_3, int d)
	{
		name_base = name;
		first_place = f;
		second_place = s;
		fird_place = f_3;
		defense = d;
	}
	void add_card(Card* c)
	{
		play_cards.push_back(c);
	}
	bool sum_score()
	{
		int s = 0;
		for (unsigned int i = 0; i < play_cards.size(); i++)
		{
			s += play_cards[i]->power_score;
		}
		if (s >= defense)
			return true;
		return false;
	}
	void (*base_feature)();
	string name_base;
	vector<Card*> play_cards;
	int first_place;
	int second_place;
	int fird_place;
private:
	int defense;
};
#endif // !BASE_H
