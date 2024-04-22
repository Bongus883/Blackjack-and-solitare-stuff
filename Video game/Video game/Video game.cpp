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
	//At the top here is a load of stuff that happens before anything else in Blackjack. Things like class creation, the use of functions. These functions shuffle the deck, draw cards from the deck, and give the drawn cards to the player
	srand(time(0));
	Deck Jackdeck = Deck();
	Player YOU = Player();
	Dealer THAT_GUY = Dealer();
	Jackdeck.Shuffle();
	Card MYcard = Jackdeck.Get_top_card();
	Jackdeck.Remove_top_card();
	YOU.give_cardP(MYcard);
	//This is the opening premise for the game. I wanted to include a humourous scenario to make the experience more interesting
	cout << "You have made the unwise descision to visit the casino today\nYou are the world's worst gambler. You are over 1 trillion billion monies in debt, yet you continue to try your luck anyway, you asinine moron\nYou decide to play blackjack. You sit down at the table alongside your opponents (Who will do literally NOTHING in this game mechanically) and the dealer spits directly into your face, before dealing your ''''cards'''':\n \nHow to play: Type in hit to hit, and stand to stand. Type in ANYTHING other than what I tell you to, and you will go to hell (Seriously, you will, I'm not messing around)\nIf you need to know the exact rules of blackjack, then get out of my sight, wretch\nAlthough... just one more thing. Here at the casino, we run a special policy where you can continue to hit even if you have gone bust, you know, for very serious and logical reasons\nThis is because all cards are taken at face value here, and you can actually lose as soon as the game starts, because it's funny\nTo balance this out, the dealer only gets two cards per game\nReady now? Ok, cool. It's time for Blackjack:" << endl;
	cout << "" << endl;
	//All of this is just giving and displaying more cards to the player and dealer. It's a lot of code for such a seemingly simple concept
	cout << "You got: " << MYcard.get_desc() << endl;
	MYcard = Jackdeck.Get_top_card();
	Jackdeck.Remove_top_card();
	YOU.give_cardP(MYcard);
	cout << "You also got: " << MYcard.get_desc() << endl;
	cout << "" << endl;
	MYcard = Jackdeck.Get_top_card();
	Jackdeck.Remove_top_card();
	THAT_GUY.give_cardD(MYcard);
	cout << "The dealer got: " << MYcard.get_desc() << endl;
	cout << "Your current total is " << YOU.get_card_value_P() << endl;
	cout << "The dealer's current total is " << THAT_GUY.get_card_value_D() << " but their other ''''card'''' and their final total remain a mystery for now..." << endl;
	cout << "" << endl;
	cout << "Do you want to hit or stand?" << endl;
	cout << "" << endl;

	string hit_or_stand;
	cin >> hit_or_stand;
	cout << "" << endl;

	while (hit_or_stand == "hit") {
		MYcard = Jackdeck.Get_top_card();
		Jackdeck.Remove_top_card();
		YOU.give_cardP(MYcard);
		cout << "After hitting, you got " << MYcard.get_desc() << endl;
		cout << "Your current total is now " << YOU.get_card_value_P() << endl;
		cout << "Do you want to hit or stand? " << endl;
		cin >> hit_or_stand;
		cout << "" << endl;
	}

	if (hit_or_stand == "stand") {
		cout << "You decide to stand" << endl;
		cout << "Your final total is " << YOU.get_card_value_P() << endl;
		MYcard = Jackdeck.Get_top_card();
		Jackdeck.Remove_top_card();
		THAT_GUY.give_cardD(MYcard);
		cout << "The dealer's other card was: " << MYcard.get_desc() << ", so, their final total is " << THAT_GUY.get_card_value_D() << endl;
		if (THAT_GUY.get_card_value_D() > 21 && YOU.get_card_value_P() < 21) { //This is what happens if the dealer busts and you don't
			cout << "YOU WON!! You leap up onto the table and begin breakdancing in the dealer's face as they being foaming at the mouth. You actually have no idea how much money you won, but you don't care. The sweet, sweet taste of victory and the disturbing gargling noises coming from the dealer's convulsing body are more than enough for you. As the dealer is carried away on a stretcher while a new one walks up to the table to replace them, you wonder what you are going to do now" << endl;
		}
		else if (YOU.get_card_value_P() > 21 || YOU.get_card_value_P() < THAT_GUY.get_card_value_D()) { //This is what happens if either you bust, or the dealer has a higher card value than you
			cout << "You lost... The entire casino collectively stands up, looks in your direction, and begins pointing and laughing at you.The dealer then begins to ask you which of many debilitating neurological symptoms you are currently suffering from, seeing as thought they would very clearly be the cause of your loss in this luck based game (Unless you just kept on hitting, which is pretty funny). So, what now ? You aren't the type to be easily dissuaded, and your addictive vices won't feed themselves" << endl;
		}
		else if (YOU.get_card_value_P() == THAT_GUY.get_card_value_D() || (YOU.get_card_value_P() > 21 && THAT_GUY.get_card_value_D() > 21)) { //This is what happens in case of a tie
			cout << "It's... a tie?? Since nothing happens in a tie, the cards get re-dealt and the game begins again" << endl;
		}




	}
	else {
		cout << "" << endl;
		cout << "Didn't I tell you? A portal to hell opens directly beneath you, sending you straight to the depths of hell, where you will live the rest of your existance making small talk with the devil\nPlease follow the rules next time, you pusillanimous swine" << endl;
	}
	
	//if (hiit == 2) int(Player::get_card_value_P <= 21) int(Dealer::get_card_value_D > 21) {
	//	cout << ""
	//}
	//You lost... The entire casino collectively stands up, looks in your direction, and begins pointing and laughing at you. The dealer then begins to ask you which of many debilitating neurological symptoms you are currently suffering from, seeing as thought they would very clearly be the cause of your loss in this luck based game. So, what now? You aren't the type to be easily dissuaded, and your addictive vices won't feed themselves. Do you want to play again despite your shameful defeat? (Type yes or no)
	//YOU WON!! You leap up onto the table and begin breakdancing in the dealer's face as they being foaming at the mouth. You actually have no idea how much money you won, but you don't care. The sweet, sweet taste of victory and the disturbing gargling noises coming from the dealer's convulsing body are more than enough for you. As the dealer is carried away on a stretcher while a new one walks up to the table to replace them, you wonder what you are going to do now. Do you want to end on a high and take your leave now, or do you want to risk it all and play another game? (Type yes to play again, or no to stop)
	//It's... a tie?? Since nothing happens in a tie, the cards get re-dealt and the game begins again
	//cin >>
	//You decide that enough is enough, and proceed to scuttle out of the casino the way you came in, refusing to elaborate to the security guards as to why you came into the casino completely naked. Thank you for playing!
	//You strap yourself in and prepare yourself for another round... The dealer calls you a degenerate schmuck, before spitting in your face again and dealing the ''''cards''''
}
