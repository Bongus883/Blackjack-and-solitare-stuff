#pragma once
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Player
{
//The two things in private are the player hand (Empty at the start of the game) and the total value of all the cards in your hand
private:
	vector<Card> Player_hand;
	int Total_card_value_P;

//The three things here are as follows: The constructor (Does not do much in this case specifically) as well as commands to print out the value of all the cards in your hand, and a command to move a card from the deck into your hand
public:
	Player();
	int get_card_value_P();
	void give_cardP(Card THEcardP);
};

//I'm not sure if I need to comment .h and .cpp files for classes, but for the sake of clarity, I will do anyway
//This class is for YOU/ME, the person playing the game (The game being, Blackjack)