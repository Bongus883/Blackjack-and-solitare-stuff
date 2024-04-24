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

