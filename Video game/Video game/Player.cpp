#include "Player.h"
#include "Deck.h"

//This is the value of the cards in your hand at the start of the game. It increases as you get cards
Player::Player(){
	Total_card_value_P = 0;
}

//This is self-explanatory I think
int Player::get_card_value_P() {
	return Total_card_value_P;
}

//This is for when a card gets moved into your hand
void Player::give_cardP(Card THEcardP) {
	Player_hand.push_back(THEcardP);
	Total_card_value_P += THEcardP.get_value();
}