//Pemching Kue
//fr6680
//Lab01 Task 2

#include "defense.h"

Defense::Defense(string name): Player(name) {
	this->name = name;
}

void Defense::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}

void Defense::setTackles(int tackles) {
	this->tackles = tackles;
}

void Defense::printStats() const {
	Player::printStats(); cout << "\tMinutes: " << minutes << "\tTackles: " << tackles << endl;
}