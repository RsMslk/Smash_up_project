#pragma once
#ifndef TABLE_H
#define TABLE_H
class Table
{
public:
	Table(int n)
	{
		players_amount = n;
	}
	void creating_bases(vector<class Base>& all_bases, int players_amount)
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
private:
	int players_amount;
	vector<Base> game_base;
};
#endif // !TABLE_H
