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
	void add_minion(Minion min)
	{
		play_minion.push_back(min);
	}
	void add_action(Action act)
	{
		play_action.push_back(act);
	}
	void (*base_feature)();
private:
	string name_base;
	int first_place;
	int second_place;
	int fird_place;
	int defense;
	vector<Minion> play_minion;
	vector<Action> play_action;
};
#endif // !BASE_H
