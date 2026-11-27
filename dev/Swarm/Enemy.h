#pragma once
#include <string>
class Enemy
{

	int health;
	int damage;
	bool cleave;
	bool flying;
	std::string name;
	int speed;
	int spawnValue;

public:

	int getSpawnValue();

	int getSpeed();

	int getEnemyHealth();

	int getEnemyDamage();

	bool getCleave();

	bool getFlying();

	std::string getName();
};

