#include "Waste.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

using std::shuffle;

void Waste::shuffle() {
	random_shuffle(THE_pile.begin(), THE_pile.end());
}

void Waste::Take_card() {
	THE_pile.erase(THE_pile.begin());
}

Actual_card Waste::Draw() {
	return THE_pile.front();
}

Waste::Waste() {
	vector<string> stuff = {};

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(stuff[i], "Hearts");
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(stuff[i + 13], "Spades");
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(stuff[i + 26], "Diamonds");
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(stuff[i + 39], "Clubs");
		THE_pile.push_back(temp);
	}
}
