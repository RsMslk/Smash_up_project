#pragma once
#ifndef CARD_H
#define CARD_H

class Card
{
public:
	Card(string name, int score, void func(), int t)
	{
		name_card = name;
		power_score = score;
		type = t;
		min_act = func;
	}
	void (*min_act)();
private:
	string name_card;
	int power_score;
	int type; // 0 - приспешник, 1 - действие
	class Card* next;
	class Card* prev;
};

class Fraction
{
public:
	Fraction(string name, class Card* c)
	{
		name_fraction = name;
		cards = c;
	}
	class Card* cards;
private:
	string name_fraction;
};

#endif // !CARD_H
