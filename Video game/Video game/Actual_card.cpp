#include "Actual_card.h"

Actual_card::Actual_card(string cards, string other_suit) {
	Cards = cards;
	Other_suit = other_suit;
}

string Actual_card::get_cards() {
	return Cards;
}

string Actual_card::get_other_suit() {
	return Other_suit;
}
