#pragma once
#include <string>

enum Loot {
	ROACHEGGS,
	ROACHCARCASS,
	BIRDMEAT,
	NONE,
	COIN,
	NUGGET,
	DOLLARBILL,
	BIRDEGG,
	DOGTOOTH,
	REPTILEEGG,
	POTATO,
	TOMATO,
	CORN,
	DRUMSTICK,
	DOGMEAT,
	WOLFMEAT,
	MINNOW,
	SALMON,
};

class Rat
{
	int mHealth;
	int mDamage;
	bool mRanged;
	std::string mSpecialization;
	int mSpeed;
	Loot mLoot;

public:

	Rat(int health = 5, int damage = 3, bool ranged = false, std::string specialization = "None", int speed = 4) {
		mHealth = health;
		mDamage = damage;
		mRanged = ranged;
		mSpecialization = specialization;
		mSpeed = speed;
	}

	int getSpeed();

	int getHealth();

	int getDamage();

	bool getRanged();

	std::string getSpecialization();

	Loot getLoot();

};

