#pragma once
#include <string>
class Rat
{
	int health;
	int damage;
	bool ranged;
	std::string specialization;
	int speed;

public:

	int getSpeed();

	int getHealth();

	int getDamage();

	bool getRanged();

	std::string getSpecialization();

};

