#include "Dealer.h"
#include "Deck.h"


Dealer::Dealer(){
	Total_card_value_D = 0;
}

int Dealer::get_card_value_D() {
	return Total_card_value_D;
}

void Dealer::give_cardD(Card THEcardD) {
	Dealer_hand.push_back(THEcardD);
	Total_card_value_D += THEcardD.get_value();
}

//Same deal as the Dealer.h file. It's the same as the Player files