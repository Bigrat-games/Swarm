#pragma once
#include "Rat.h"
#include "Enemy.h"
#include <vector>
#include <ctime>
#include <cstdlib>


struct Room {
	std::vector<Enemy*> enemies;
	std::vector<Rat*> rats;
	bool active = false;
	bool entered = false;
	bool currRoom;
};

class Dungeon
{

	std::vector<Room*> mMap;

	std::vector<Rat*> mParty;

	int mDifficulty;

	std::string mType;

	

public:

	Dungeon(std::vector<Rat*> party, std::string type, int difficulty) {
		for (int i = 0; i < 49; i++) {
			mMap.push_back(new Room);
		}
		mParty = party;
		mType = type;
		mDifficulty = difficulty;
		generateMap();
	}

	void generateMap();

	std::vector<Room*> getMap();

	std::vector<Rat*> getParty();

	std::string getType();

	int getDifficulty();

	void setParty(std::vector<Rat*> party);



};

