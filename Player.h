#pragma once
#ifndef PLAYER_H
#define PLAYER_H
class Player
{
public:
	Player(int n, string name, class Fraction* p1, class Fraction* p2)
	{
		total_score = n;
		nickname = name;
		pick1 = p1;
		pick2 = p2;
		reset_list = nullptr;
		hand_list = pick1->cards;
	}
private:
	int total_score;
	string nickname;
	class Fraction* pick1;
	class Fraction* pick2;
	class Card* hand_list;
	class Card* reset_list;
};
#endif // !PLAYER.H
