#pragma once
#include <string>
#include <vector>
#include "Actual_card.h"

using namespace std;

class Foundation
{
private:
	vector<Actual_card> Discard_pile;
	int Hit_cards;

public:
	Foundation();
	int Total_hit_cards();
	void HIT(Actual_card Winner_time);
};

//This is the pile that cards go to when they are hit. It contains a vector to store those cards in, it keeps track of the cards you have hit, and a function to move hit cards to this pile 