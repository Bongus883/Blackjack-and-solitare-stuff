#pragma once
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Player
{
private:
	vector<Card> Player_hand;
	int Total_card_value_P;

public:
	Player();
	int get_card_value_P();
	void give_cardP(Card THEcardP);
};

