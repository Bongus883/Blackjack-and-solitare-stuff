#pragma once
#include <string>
#include <vector>
#include "Actual_card.h"

using namespace std; 

class Waste
{
private:
	vector<Actual_card> THE_pile;

public:
	Waste();
	Actual_card Draw();
	void Take_card();
	void shuffle();
	void MISS(Actual_card Loser_time);
};

//This is the pile that you pick up cards from. It contains a vector of all the cards, as well as functions that gets the card at the op of the deck, removes said card, shuffles the deck at the start of the game, and puts the card back in the deck if it was a miss