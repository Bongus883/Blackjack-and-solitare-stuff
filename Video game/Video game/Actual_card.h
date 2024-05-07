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

