#pragma once
#ifndef CARD_H
#define CARD_H

class Card
{
public:
	Card(string name, int score, void(*func)(), int t)
	{
		name_card = name;
		power_score = score;
		type = t;
		min_act = func;
	}
	string name_card;
	void (*min_act)();
	int power_score;
private:
	int type; // 0 - приспешник, 1 - действие
};

class Fraction
{
public:
	Fraction(string name, vector<Card*> c)
	{
		name_fraction = name;
		cards = c;
	}
	vector<Card*> cards;
	string name_fraction;
private:
};

#endif // !CARD_H
