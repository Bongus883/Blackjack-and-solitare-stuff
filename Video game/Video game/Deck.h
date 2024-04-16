#pragma once
#include <string>
#include <vector>
#include "Card.h"
using namespace std;

class Deck
{
//This vector contains all 51 cards of the deck
private:
	vector<Card> Cardeck;
//These four thingies are: The constructor (Which doesn't do anything I think), a command to return whatever the top card of the deck is, a command to remove said top card from the deck, and a command to shuffle the deck
public:
	Deck();
	Card Get_top_card();
	void Remove_top_card();
	void Shuffle();
};

//This is a class for the Blackjack deck