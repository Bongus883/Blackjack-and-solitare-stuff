#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main()
{
	Deck Jackdeck = Deck();
	Card MYcard = Jackdeck.Get_top_card();
	cout << "You have made the unwise descision to visit the casino today\nYou are the world's worst gambler. You are over 1 trillion billion monies in debt, yet you continue to try your luck anyway, you asinine moron\nYou decide to play blackjack. You sit down at the table alongside your opponents (Who will do literally NOTHING in this game mechanically) and the dealer spits directly into your face, before dealing your ''''cards'''':\n \nHow to play: Type in hit to hit, and stand to stand. If you need to know the exact rules of blackjack, then get out of my sight, wretch." << endl;
	cout << "" << endl;
	cout << "You got: " << MYcard.get_desc() << endl;
	//cout << "You also got: " << MYcard.get_desc() << endl;
	cout << "" << endl;
	//cout << "The dealer got: " 
	//cout << "Your current total is " +
	//cout << "The dealer's current total is " 
	//cout << "Do you want to hit or stand?"
	//cin >> 

}
