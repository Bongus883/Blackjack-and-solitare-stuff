#pragma once
#include <string>

using namespace std;

class Card
{
private:
	int Card_values;
	string Suit;
	string Card_description;

public:
	Card(int value, string suit, string desc);
	int get_value();
	string get_suit();
	string get_desc();
};