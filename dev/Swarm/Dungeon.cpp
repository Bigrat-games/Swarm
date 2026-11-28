#include "Dungeon.h"

std::vector<Room*> Dungeon::getMap() {
	return mMap;
};

std::vector<Rat*> Dungeon::getParty() {
	return mParty;
};

void Dungeon::setParty(std::vector<Rat*> party) {
	mParty = party;
};

std::string Dungeon::getType() {
	return mType;
};

int Dungeon::getDifficulty() {
	return mDifficulty;
};

void Dungeon::generateMap() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int starterRoom = rand() % 49;

	mMap.at(starterRoom)->active = true;
	mMap.at(starterRoom)->rats = mParty;

	int amountOfRooms = rand() % 25 + 10;

	Room* iter = mMap.at(starterRoom);

	std::vector<Room*> activeRooms;
	activeRooms.push_back(iter);

	for (int i = 0; i < amountOfRooms; i++) {
		bool canGenerate = false;
		int direction = rand() % 4;


		while (canGenerate = false) {
			canGenerate = true;
			if ((iter == mMap.at(0) || iter == mMap.at(1) || iter == mMap.at(2) || iter == mMap.at(3) || iter == mMap.at(4) || iter == mMap.at(5) || iter == mMap.at(6)) && direction == 0) {
				canGenerate = false;
			}
			if ((iter == mMap.at(6) || iter == mMap.at(13) || iter == mMap.at(20) || iter == mMap.at(27) || iter == mMap.at(34) || iter == mMap.at(41) || iter == mMap.at(48)) && direction == 1) {
				canGenerate = false;
			}
			if ((iter == mMap.at(42) || iter == mMap.at(43) || iter == mMap.at(44) || iter == mMap.at(45) || iter == mMap.at(46) || iter == mMap.at(47) || iter == mMap.at(48)) && direction == 2) {
				canGenerate = false;
			}
			if ((iter == mMap.at(0) || iter == mMap.at(7) || iter == mMap.at(14) || iter == mMap.at(21) || iter == mMap.at(28) || iter == mMap.at(35) || iter == mMap.at(42)) && direction == 0) {
				canGenerate = false;
			}

			if (canGenerate == false) {
				direction = rand() % 4;
			}

		}

		int index;

		for (int o = 0; o < 49; o++) {
			if (iter == mMap.at(o)) {
				index = o;
				break;
			}
		}


		if (canGenerate == true) {
			canGenerate = false;

			if (direction == 0) {
				if (mMap.at(index - 7)->active == false) {
					mMap.at(index - 7)->active = true;
					activeRooms.push_back(mMap.at(index - 7));
					canGenerate = true;
				}
			}

			if (direction == 1) {
				if (mMap.at(index + 1)->active == false) {
					mMap.at(index + 1)->active = true;
					activeRooms.push_back(mMap.at(index + 1));
					canGenerate = true;
				}
			}

			if (direction == 2) {
				if (mMap.at(index + 7)->active == false) {
					mMap.at(index + 7)->active = true;
					activeRooms.push_back(mMap.at(index + 7));
					canGenerate = true;
				}
			}

			if (direction == 3) {
				if (mMap.at(index - 1)->active == false) {
					mMap.at(index - 1)->active = true;
					activeRooms.push_back(mMap.at(index - 1));
					canGenerate = true;
				}
			}

			if (canGenerate == false) {
				i--;
			}
		}

		int iterindex = rand() % activeRooms.size();
		iter = activeRooms.at(iterindex);
	}
};