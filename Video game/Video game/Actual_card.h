#pragma once
#include <string>

using namespace std;

class Actual_card
{
private:
	int Numbero;
	string Other_suit;
	string Funny;

public:
	Actual_card(int numbero, string other_suit, string funny);
	int get_the_number();
	string get_other_suit();
	string get_funny_thing();
};

