#pragma once
#include <string>

using namespace std;

class Card
{
//Each card has a number value (1-13), a suit tied to it, and a description (See the blackjack deck)
private:
	int Card_values;
	string Suit;
	string Card_description;

public:
//Here are what each thing means: There is the constructor (Which contains all of the private variables) as well as the commands to return the three values above
	Card(int value, string suit, string desc);
	int get_value();
	string get_suit();
	string get_desc();
};

//This is a class for the cards in Blackjack