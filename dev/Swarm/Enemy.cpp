#include "Enemy.h"

int Enemy::getEnemyHealth() {
	return mHealth;
};

int Enemy::getEnemyDamage() {
	return mDamage;
};

bool Enemy::getCleave() {
	return mCleave;
};

bool Enemy::getFlying() {
	return mFlying;
};

std::string Enemy::getName() {
	return mName;
};

int Enemy::getSpeed() {
	return mSpeed;
};

int Enemy::getSpawnValue() {
	return mSpawnValue;
};

bool Enemy::getDead() {
	return mDead;
}