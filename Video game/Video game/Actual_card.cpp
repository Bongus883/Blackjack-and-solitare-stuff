#include "Actual_card.h"

Actual_card::Actual_card(int numbero, int one, string other_suit, string funny) {
	Numbero = numbero;
	One = one;
	Other_suit = other_suit;
	Funny = funny;
}

int Actual_card::get_the_number() {
	return Numbero;
}

int Actual_card::embezzlement_total() {
	return One;
}

string Actual_card::get_other_suit() {
	return Other_suit;
}

string Actual_card::get_funny_thing() {
	return Funny;
}

//The functions that return the variables in the .h file