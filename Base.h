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
	void add_card(Card c)
	{
		play_cards.push_back(c);
	}
	void (*base_feature)();
private:
	string name_base;
	int first_place;
	int second_place;
	int fird_place;
	int defense;
	vector<Card> play_cards;
};
#endif // !BASE_H
