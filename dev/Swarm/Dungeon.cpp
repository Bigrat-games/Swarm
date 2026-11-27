#include "Dungeon.h"

std::vector<std::vector<Room>> Dungeon::getMap() {
	return mMap;
};

std::vector<Rat*> Dungeon::getParty() {
	return mParty;
};

void Dungeon::setParty(std::vector<Rat*> party) {
	mParty = party;
};