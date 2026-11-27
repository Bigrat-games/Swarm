#pragma once
#include "Rat.h"
#include "Enemy.h"
#include <vector>


struct Room {
	std::vector<Enemy*> enemies;
	bool active;
	bool entered;
};

class Dungeon
{

	std::vector<std::vector<Room>> map;

	std::vector<Rat> party;

public:


	std::vector<std::vector<Room>> getMap();

	std::vector<Rat> getParty();


};

