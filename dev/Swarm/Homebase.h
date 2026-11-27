#pragma once
#include "Dungeon.h"
class Homebase
{
	int mFood;
	int mMoney;
	std::vector<Rat*> mRats;

public:

	Homebase() {
		mFood = 200;
		mMoney = 0;
		for (int i = 0; i < 30; i++) {
			mRats.push_back(new Rat());
		}
	}

	void addFood(int food);

	void addMoney(int money);

};

