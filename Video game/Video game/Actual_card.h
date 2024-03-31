#pragma once
#include <string>

using namespace std;

class Actual_card
{
private:
	string Cards;
	string Other_suit;

public:
	Actual_card(string cards, string other_suit);
	string get_cards();
	string get_other_suit();
};

