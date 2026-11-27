#include "Rat.h"

int Rat::getHealth() {
	return mHealth;
};

int Rat::getDamage() {
	return mDamage;
};

bool Rat::getRanged() {
	return mRanged;
};

std::string Rat::getSpecialization() {
	return mSpecialization;
};

int Rat::getSpeed() {
	return mSpeed;
};

Loot Rat::getLoot() {
	return mLoot;
};