#pragma once
#include <string>
#include <vector>
#include "Actual_card.h"

using namespace std; 

class Waste
{
private:
	vector<Actual_card> THE_pile;

public:
	Waste();
	Actual_card Draw();
	void shuffle();
};

