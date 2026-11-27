#pragma once
#include <string>
class Enemy
{

	int mHealth;
	int mDamage;
	bool mCleave;
	bool mFlying;
	std::string mName;
	int mSpeed;
	int mSpawnValue;
	bool mDead;

public:

	Enemy(int health = 1, int damage = 1, bool cleave = false, bool flying = false, bool dead = false, std::string name = "Roach", int speed = 1, int spawnvalue = 1) {
		mHealth = health;
		mDamage = damage;
		mFlying = flying;
		mCleave = cleave;
		mName = name;
		mSpeed = speed;
		mSpawnValue = spawnvalue;
		mDead = dead;
	}

	int getSpawnValue();

	int getSpeed();

	int getEnemyHealth();

	int getEnemyDamage();

	bool getCleave();

	bool getFlying();

	bool getDead();

	std::string getName();
};

