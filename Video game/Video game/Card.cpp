#include "Card.h"

Card::Card(int value, string suit, string desc) {
	Card_values = value;
	Suit = suit;
	Card_description = desc;

}

int Card::get_value() {
	return Card_values;
}

string Card::get_suit() {
	return Suit;
}

string Card::get_desc() {
	return Card_description;
}