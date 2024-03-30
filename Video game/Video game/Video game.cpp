#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

using namespace std;

int main()
{
	srand(time(0));
	Deck Jackdeck = Deck();
	Player YOU = Player();
	Dealer THAT_GUY = Dealer();
	Jackdeck.Shuffle();
	Card MYcard = Jackdeck.Get_top_card();
	cout << "You have made the unwise descision to visit the casino today\nYou are the world's worst gambler. You are over 1 trillion billion monies in debt, yet you continue to try your luck anyway, you asinine moron\nYou decide to play blackjack. You sit down at the table alongside your opponents (Who will do literally NOTHING in this game mechanically) and the dealer spits directly into your face, before dealing your ''''cards'''':\n \nHow to play: Type in hit to hit, and stand to stand. If you need to know the exact rules of blackjack, then get out of my sight, wretch." << endl;
	cout << "" << endl;
	cout << "You got: " << MYcard.get_desc() << MYcard.get_value() << endl;
	YOU.give_cardP(MYcard);
	Jackdeck.Get_top_card();
	cout << "You also got: " << MYcard.get_desc() << endl;
	cout << "" << endl;
	//cout << "The dealer got: " 
	cout << "Your current total is " + YOU.get_card_value_P() << endl;
	//cout << "The dealer's current total is " 
	//cout << "Do you want to hit or stand?"
	//cin >> 

}
