#include "Foundation.h"

Foundation::Foundation() {
	Hit_cards = 0;
}

int Foundation::Total_hit_cards() {
	return Hit_cards;
}

void Foundation::HIT(Actual_card Winner_time) {
	Discard_pile.push_back(Winner_time);
	Hit_cards += Winner_time.embezzlement_total();
}
