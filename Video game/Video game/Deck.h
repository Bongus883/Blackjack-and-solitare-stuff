#pragma once
#include <string>
#include <vector>
#include "Card.h"
using namespace std;

class Deck
{
private:
	vector<Card> Cardeck;
public:
	Deck();
	Card Get_top_card();
	Card Discard_top_card();
};