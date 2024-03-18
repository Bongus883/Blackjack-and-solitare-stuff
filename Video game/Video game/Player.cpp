#include "Player.h"


Player::Player(){
	Total_card_value_P = 0;
}

int Player::get_card_value_P() {
	return Total_card_value_P;
}

void Player::give_cardP(Card THEcardP) {
	Player_hand.push_back(THEcardP);
}