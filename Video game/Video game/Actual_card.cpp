#include "Actual_card.h"

Actual_card::Actual_card(int numbero, string other_suit, string funny) {
	Numbero = numbero;
	Other_suit = other_suit;
	Funny = funny;
}

int Actual_card::get_the_number() {
	return Numbero;
}

string Actual_card::get_other_suit() {
	return Other_suit;
}

string Actual_card::get_funny_thing() {
	return Funny;
}
