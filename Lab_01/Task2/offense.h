//Pemching Kue
//fr6680
//Lab01 Task 2

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Offense : public Player {

public:

	Offense(string name); //the constructor, it will call the constructor of the base class.
	void setMinutesPlayed(int minutes); //set minutes played by player
	void setYards(int yards); //sets how many yards player achieved.
	void printStats() const; //overrides virtual function of base class printStats(). Print stats of offense player.

private:
	int yards; //the player's yards
	string name; //the player's name
};