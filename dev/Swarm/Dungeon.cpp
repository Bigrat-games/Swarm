#include "Dungeon.h"

std::vector<std::vector<Room>> Dungeon::getMap() {
	return map;
};

std::vector<Rat> Dungeon::getParty() {
	return party;
};
