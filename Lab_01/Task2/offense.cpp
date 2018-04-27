//Pemching Kue
//fr6680
//Lab01 Task 2

#include "offense.h"

Offense::Offense(string name): Player(name) {
	this->name = name;
}

void Offense::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}

void Offense::setYards(int yards) {
	this->yards = yards;
}

void Offense::printStats() const {
	Player::printStats(); cout << "\tMinutes: " << minutes << "\tYards: " << yards << endl;
}