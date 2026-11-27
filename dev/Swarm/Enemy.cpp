#include "Enemy.h"

int Enemy::getEnemyHealth() {
	return health;
};

int Enemy::getEnemyDamage() {
	return damage;
};

bool Enemy::getCleave() {
	return cleave;
};

bool Enemy::getFlying() {
	return flying;
};

std::string Enemy::getName() {
	return name;
};

int Enemy::getSpeed() {
	return speed;
};

int Enemy::getSpawnValue() {
	return spawnValue;
};