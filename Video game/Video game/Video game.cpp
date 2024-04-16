#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Blackjack_input.h"

using namespace std;

int main()
{
	//At the top here is a load of stuff that happens before anything else in Blackjack. Things like class creation, the use of functions. These functions shuffle the deck, draw cards from the deck, and give the drawn cards to the player
	srand(time(0));
	Blackjack_input yeah = Blackjack_input();
	Deck Jackdeck = Deck();
	Player YOU = Player();
	Dealer THAT_GUY = Dealer();
	Jackdeck.Shuffle();
	Card MYcard = Jackdeck.Get_top_card();
	Jackdeck.Remove_top_card();
	YOU.give_cardP(MYcard);
	//This is the opening premise for the game. I wanted to include a humourous scenario to make the experience more interesting
	cout << "You have made the unwise descision to visit the casino today\nYou are the world's worst gambler. You are over 1 trillion billion monies in debt, yet you continue to try your luck anyway, you asinine moron\nYou decide to play blackjack. You sit down at the table alongside your opponents (Who will do literally NOTHING in this game mechanically) and the dealer spits directly into your face, before dealing your ''''cards'''':\n \nHow to play: Type in hit to hit, and stand to stand. If you need to know the exact rules of blackjack, then get out of my sight, wretch." << endl;
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
	//cin >>
	//You decided to hit. You got: _
	//You decided to stand
	//Your final total is _
	//The dealer also had: _ meaning that their final total is _
	//You lost... The entire casino collectively stands up, looks in your direction, and begins pointing and laughing at you. The dealer then begins to ask you which of many debilitating neurological symptoms you are currently suffering from, seeing as thought they would very clearly be the cause of your loss in this luck based game. So, what now? You aren't the type to be easily dissuaded, and your addictive vices won't feed themselves. Do you want to play again despite your shameful defeat? (Type yes or no)
	//YOU WON!! You leap up onto the table and begin breakdancing in the dealer's face as they being foaming at the mouth. You actually have no idea how much money you won, but you don't care. The sweet, sweet taste of victory and the disturbing gargling noises coming from the dealer's convulsing body are more than enough for you. As the dealer is carried away on a stretcher while a new one walks up to the table to replace them, you wonder what you are going to do now. Do you want to end on a high and take your leave now, or do you want to risk it all and play another game? (Type yes to play again, or no to stop)
	//It's... a tie?? Since nothing happens in a tie, the cards get re-dealt and the game begins again
	//cin >>
	//You decide that enough is enough, and proceed to scuttle out of the casino the way you came in, refusing to elaborate to the security guards as to why you came into the casino completely naked. Thank you for playing!
	//You strap yourself in and prepare yourself for another round... The dealer calls you a degenerate schmuck, before spitting in your face again and dealing the ''''cards''''
}
