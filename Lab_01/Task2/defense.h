//Pemching Kue
//fr6680
//Lab01 Task 2

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Defense : public Player {

public:

	Defense(string name); //the constructor of the class defense. it will call the constructor of the base class.
	void setMinutesPlayed(int minutes); //sets how many minutes the player played.
	void setTackles(int tackles); //sets the member variable tackles. how many tackles defense player has while playing.
	void printStats() const; //overrides virtual function of base class printStats(). print stats of defense player.

private:
	int tackles; //the player's tackles
	string name; //the player's name
};



