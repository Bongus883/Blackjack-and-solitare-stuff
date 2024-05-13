#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Actual_card.h"
#include "Waste.h"
#include "Foundation.h"

using namespace std;

int main()
{
	//Here is the first thing you see when you open the game. Type in the names of the respective games to play them
	cout << "Welcome to The Ultra Awesome Game About Gambling & Other Fun Card Based Activities(TM)!\nDo you want to play blackjack or solitaire? (Type in the one you want to play)" << endl;
	cout << "" << endl;
	string THE_CHOICE;
	cin >> THE_CHOICE;
	cout << "" << endl;

	//BLACKJACK
	if (THE_CHOICE == "blackjack") {
		//At the top here is a load of stuff that happens before anything else in Blackjack. Things like class creation, the use of functions. These functions shuffle the deck, draw cards from the deck, and give the drawn cards to the player
		srand(time(0));
		Deck Jackdeck = Deck();
		Player YOU = Player();
		Dealer THAT_GUY = Dealer();
		Jackdeck.Shuffle();
		Card MYcard = Jackdeck.Get_top_card();
		Jackdeck.Remove_top_card();
		YOU.give_cardP(MYcard);
		string hit_or_stand;
		string weiner;
		//This is the opening premise for the game. I wanted to include a humourous scenario to make the experience more interesting
		cout << "You have made the unwise descision to visit the casino today\nYou are the world's worst gambler. You are over 1 trillion billion monies in debt, yet you continue to try your luck anyway, you asinine moron\nYou decide to play blackjack. You sit down at the table alongside your opponents (Who will do literally NOTHING in this game mechanically) and the dealer spits directly into your face, before dealing your ''''cards'''':\n \nHow to play: Type in hit to hit, and stand to stand. Type in ANYTHING other than what I tell you to, and you will go to hell (Seriously, you will, I'm not messing around)\nIf you need to know the exact rules of blackjack, then get out of my sight, wretch\nAlthough... just one more thing. Here at the casino, we run a special policy where you can continue to hit even if you have gone bust, you know, for very serious and logical reasons\nThis is because all cards are taken at face value here, and you can actually lose as soon as the game starts, because it's funny. Your grave has already been dug. What's a few more feet?\nTo balance this out, the dealer only gets two cards per game\nReady now? Ok, cool. It's time for Blackjack:" << endl;
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

		cin >> hit_or_stand;
		cout << "" << endl;

		//This is what happens if you want to hit. Another card gets dealt to you
		while (hit_or_stand == "hit") {
			MYcard = Jackdeck.Get_top_card();
			Jackdeck.Remove_top_card();
			YOU.give_cardP(MYcard);
			cout << "After hitting, you got: " << MYcard.get_desc() << endl;
			cout << "Your current total is now " << YOU.get_card_value_P() << endl;
			cout << "Do you want to hit or stand? " << endl;
			cin >> hit_or_stand;
			cout << "" << endl;
		}

		//Everything below this text is what happens when you stand
		if (hit_or_stand == "stand") {
			cout << "You decide to stand" << endl;
			cout << "Your final total is " << YOU.get_card_value_P() << endl;
			MYcard = Jackdeck.Get_top_card();
			Jackdeck.Remove_top_card();
			THAT_GUY.give_cardD(MYcard);
			cout << "The dealer's other card was: " << MYcard.get_desc() << ", so, their final total is " << THAT_GUY.get_card_value_D() << endl;
			if (THAT_GUY.get_card_value_D() > 21 && YOU.get_card_value_P() < 21) { //This is what happens if the dealer busts and you don't
				cout << "YOU WON!! You leap up onto the table and begin breakdancing in the dealer's face as they being foaming at the mouth\nYou actually have no idea how much money you won, but you don't care. The sweet, sweet taste of victory and the disturbing gargling noises coming from the dealer's convulsing body are more than enough for you\nAs the dealer is carried away on a stretcher while a new one walks up to the table to replace them, you wonder what you are going to do now" << endl;
				cout << "Do you want to end on a high and take your leave now, or do you want to risk it all and play another game? (Type yes to play again, or no to stop)" << endl; //Any text that asks you this gives you the option to play again or to stop playing. The results of both are self explanetory
				cout << "" << endl;
				cin >> weiner;
				cout << "" << endl;
				if (weiner == "yes") {
					cout << "You strap yourself in and prepare yourself for another round... The dealer calls you a degenerate schmuck, before spitting in your face again and dealing the ''''cards''''" << endl;
				}
				else if (weiner == "no") {
					cout << "You decide that enough is enough, and proceed to scuttle out of the casino the way you came in, refusing to elaborate to the security guards as to why you came into the casino completely naked. Thank you for playing!" << endl;
				}
				else {
					cout << "" << endl;
					cout << "Didn't I tell you? A portal to hell opens directly beneath you, sending you straight to the depths of hell, where you will live the rest of your existance making small talk with the devil\nPlease follow the rules next time, you pusillanimous swine" << endl;
				}
			}
			else if (YOU.get_card_value_P() > 21 || YOU.get_card_value_P() < THAT_GUY.get_card_value_D()) { //This is what happens if either you bust, or the dealer has a higher card value than you
				cout << "You lost... The entire casino collectively stands up, looks in your direction, and begins pointing and laughing at you\nThe dealer then begins to ask you which of many debilitating neurological symptoms you are currently suffering from, seeing as thought they would very clearly be the cause of your loss in this luck based game\nUnless you just kept on hitting, which is pretty funny\nSo, what now? You aren't the type to be easily dissuaded, and your addictive vices won't feed themselves" << endl;
				cout << "Do you want to play again despite your shameful defeat? (Type yes to play again, or no to stop)" << endl;
				cout << "" << endl;
				cin >> weiner;
				cout << "" << endl;
				if (weiner == "yes") {
					cout << "You strap yourself in and prepare yourself for another round... The dealer calls you a degenerate schmuck, before spitting in your face again and dealing the ''''cards''''" << endl;
				}
				else if (weiner == "no") {
					cout << "You decide that enough is enough, and proceed to scuttle out of the casino the way you came in, refusing to elaborate to the security guards as to why you came into the casino completely naked. Thank you for playing!" << endl;
				}
				else {
					cout << "" << endl;
					cout << "Didn't I tell you? A portal to hell opens directly beneath you, sending you straight to the depths of hell, where you will live the rest of your existance making small talk with the devil\nPlease follow the rules next time, you pusillanimous swine" << endl;
				}
			}
			else if (YOU.get_card_value_P() > THAT_GUY.get_card_value_D()) { //This is what happens if you get a higher card value than the dealer
				cout << "YOU WON!! You leap up onto the table and begin breakdancing in the dealer's face as they being foaming at the mouth\nYou actually have no idea how much money you won, but you don't care. The sweet, sweet taste of victory and the disturbing gargling noises coming from the dealer's convulsing body are more than enough for you\nAs the dealer is carried away on a stretcher while a new one walks up to the table to replace them, you wonder what you are going to do now" << endl;
				cout << "Do you want to end on a high and take your leave now, or do you want to risk it all and play another game? (Type yes to play again, or no to stop)" << endl;
				cout << "" << endl;
				cin >> weiner;
				cout << "" << endl;
				if (weiner == "yes") {
					cout << "You strap yourself in and prepare yourself for another round... The dealer calls you a degenerate schmuck, before spitting in your face again and dealing the ''''cards''''" << endl;
				}
				else if (weiner == "no") {
					cout << "You decide that enough is enough, and proceed to scuttle out of the casino the way you came in, refusing to elaborate to the security guards as to why you came into the casino completely naked. Thank you for playing!" << endl;
				}
				else {
					cout << "" << endl;
					cout << "Didn't I tell you? A portal to hell opens directly beneath you, sending you straight to the depths of hell, where you will live the rest of your existance making small talk with the devil\nPlease follow the rules next time, you pusillanimous swine" << endl;
				}
			}
			else if (YOU.get_card_value_P() == THAT_GUY.get_card_value_D() || (YOU.get_card_value_P() > 21 && THAT_GUY.get_card_value_D() > 21)) { //This is what happens in case of a tie
				cout << "It's... a tie?? Since nothing happens in a tie, the cards get re-dealt and the game begins again" << endl;
			}
		}
		else {
			cout << "" << endl; //This is what happens if you type in ANYTHING that isn't asked of you
			cout << "Didn't I tell you? A portal to hell opens directly beneath you, sending you straight to the depths of hell, where you will live the rest of your existance making small talk with the devil\nPlease follow the rules next time, you pusillanimous swine" << endl;
		}
	}
	
	//SOLITAIRE
	if (THE_CHOICE == "solitaire") {
		srand(time(0));
		Waste Wastio = Waste();
		Foundation Hitts = Foundation();
		Wastio.shuffle();
		Actual_card Yeah = Wastio.Draw();
		Wastio.Take_card();
		string Uhh;
		//This is the premise for the game of solitaire, as well as the "rules"
		cout << "Having been blacklisted from your local casino for public indecency, you have decided to engage in a different fun and cool recreational activity: Serial embezzlement\nYou have been planning this day for years. You have worked for exactly 52 companies in the past, and you have has access to the financial information of each one\nNot only that, but you have also created a fictitious, high-ranking finincial advisor in each company that acts as your mouthpiece\nYou have promised various real investors high return product investments, but you actually intend to keep most of the money for yourself\nYou are about to enact the biggest Ponzi scheme in history. There are no products or services. You will be paying investors with money from other investors while become mega rich in the process\nAnd somehow, you have set this up in 52 individual companies.You may be a terrible gambler, but you are an incredible white collar criminal, if such a thing exists\nUnfortunately though, all 52 companies have coincidentally signed up to a security service that can tell when a scheme like yours is about to happen, and because of that, your plan is going to be a little harder to pull off\nIn order to bypass the security system, you need to win a game of Hit or Miss solitaire. If you can guess the right card as it comes up, then you can successfully bypass the system for ONE of the 52 companies, and begin your embezzlement\n...don't ask me why it's like that. I didn't make that security system" << endl;
		cout << "" << endl;
		cout << "I know this seems like an INCREDIBLY contrived way of creating a potentially funny scenario for a game of Hit or Miss. And you would be right\nBut ask yourself, would you seriously rather play regular, boring old Hit or Miss over whatever the heck this game is? Yeah, didn't think so, schmuck" << endl;
		cout << "" << endl;
		cout << "How to play: This is a game that almost plays itself\nYou (Or the game I guess) will count upwards from 1 to 13. Each time you count, a card is drawn\nIf the number you counted is the same number on the card, then it's a hit, and that card is taken out of the deck\nTake every card out of the deck by gussing correctly, and you win! Or in this case, you managed to successfully embezzle all 52 companies!\nIn terms of losing, really the only way you will lose is if you end up in a situation where you physically cannot hit a card (It can happen) In which case, you spend the rest of your life decaying away at your computer trying to embezzle the unembezzleable. That probably counts as you losing I think\nAlso, you will need to type something every time a card is drawn. You can type anything you want. It's just a way of making sure the game doesn't go through the entire deck in one go, you know?\nYeah, I know it's not the most exciting game in the world, but every time you hit, you will get a potentially funny description of the comapny you just stole money from. So thats something" << endl;
		cout << "" << endl;
		//This is pretty much the entirety of solitaire. You draw a card, and if it is equal to the number you are currently on, then you successfully embezzle the company. Once you get to the king, it loops back around to the Ace
		while (Hitts.Total_hit_cards() != 52) {
			cout << "You called an ace. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 1) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a two. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 2) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a three. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 3) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a four. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 4) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a five. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 5) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a six. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 6) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a seven. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 7) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if(Wastio.Get_size() > 0){
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
				
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a eight. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 8) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a nine. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 9) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a ten. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 10) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a Jack. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 11) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a Queen. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 12) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
			cout << "You called a King. The card and it's value you got back were..." << endl;
			cout << "The value: " << Yeah.get_the_number() << endl;
			cout << "The suit: " << Yeah.get_other_suit() << endl;
			if (Yeah.get_the_number() == 13) {
				cout << "Nice! You just embezzled: " << Yeah.get_funny_thing() << endl;
				Hitts.HIT(Yeah);
				cout << "You have successfully embezzled " << Hitts.Total_hit_cards() << " out of 52 companies!" << endl;
				if (Wastio.Get_size() > 0) {
					Yeah = Wastio.Draw();
					Wastio.Take_card();
				}
				else {
					break;
				}
			}
			else {
				cout << "Awww, you got it wrong. No embezzlement for you right now :[" << endl;
				Wastio.MISS(Yeah);
				Yeah = Wastio.Draw();
				Wastio.Take_card();
			}
			cin >> Uhh;
		}
		//This is the victory message that appears once you win in Solitaire
		if (Hitts.Total_hit_cards() == 52) {
			cout << "" << endl;
			cout << "You did it! You managed to embezzle all 52 companies!\nAs you watch billions fill up your bank account, you sit back in your comfy chair and think about how much of a cool guy you are, and what exactly you are going to do with your newfound infinite wealth\nYour descicion? To found your own company, Ultrahelp - A company that people report random miscallanious problems they have to, so that other people can provide assistance in exhance for a monetary reward\nThe catch is that there are also job listings for other people to come in to both make the problem worse, and to stop the first person from helping in the first place in any way they choose\nWhy would you set up a company like this? For your own entertainment of course! What else would you be doing all day in your luxury Hawaiian penthouse? NOT hearing about how somebody stopped the construction of an orphanage with an army of domesticated beavers? Didn't think so" << endl;
			cout << "" << endl;
			cout << "Thank you for playing!" << endl;
		}
	}
}
