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

//I'm not really sure what to add in here. This is just where the other code I need to make the functions work is stored. It is important and stuff