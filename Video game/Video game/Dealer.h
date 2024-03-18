#pragma once
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Dealer
{
private:
	vector<Card> Dealer_hand;
	int Total_card_value_D;

public:
	Dealer();
	int get_card_value_D();
	void give_cardD(Card THEcardD);
};

