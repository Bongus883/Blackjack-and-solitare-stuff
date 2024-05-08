#pragma once
#include <string>

using namespace std;

class Actual_card
{
private:
	int Numbero;
	int One;
	string Other_suit;
	string Funny;

public:
	Actual_card(int numbero, int one, string other_suit, string funny);
	int get_the_number();
	int embezzlement_total();
	string get_other_suit();
	string get_funny_thing();
};

//The card class for solitaire. It contains the value of the card istelf (Although that value is unused, so it could very well be taken out), a score that shows how many cards you've hit, the suit, and the funny comapny description you get if you hit a card