#pragma once
#ifndef CARD_H
#define CARD_H

class Minion
{
public:
	Minion(string name, int score, void func())
	{
		name_minion = name;
		power_score = score;
		min_act = func;
	}
	void (*min_act)();
private:
	string name_minion;
	int power_score;
};

class Action
{
public:
	Action(string name, void func())
	{
		name_action = name;
		act = func;
	}
	void (*act)();
private:
	string name_action;
};

class Fraction
{
public:
	Fraction(string name, vector<class Minion> min, vector<class Action> act)
	{
		name_fraction = name;
		minions = min;
		actions = act;
	}
private:
	string name_fraction;
	vector<class Minion> minions;
	vector<class Action> actions;
};

#endif // !CARD_H
