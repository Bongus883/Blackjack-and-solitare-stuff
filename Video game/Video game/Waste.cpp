#include "Waste.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

using std::shuffle;

void Waste::shuffle() {
	random_shuffle(THE_pile.begin(), THE_pile.end());
}

void Waste::Take_card() {
	THE_pile.erase(THE_pile.begin());
}

Actual_card Waste::Draw() {
	return THE_pile.front();
}

Waste::Waste() {
	vector<string> stuff = { "The worlds best functioning alarm clocks! - A company that sells alarm clocks that will actually kill you in a very violent manner if you don't get up on time. So by definition, they are the best functioning alarm clocks", "White collar crime monthly - A magazine that publishes articles on how to spot and deal with white collar crimes. Clearly, the writers do not read their own material", "The person wash - A company that washes human beings as if they went to a car wash. Complete with that giant cleaning tube thing. You know what I'm talking about", "Totally legit hotels LTD - A company that builds hotels filled with rooms that are designed to mess with you. You quit after staying in one once, only to find that the toilet water began to rise after you flushed, your bed was secretly made of cardboard, and your smoke alarm only existed to go off at 3AM for no reason", "RiceCo - The richest company in the world, that owns every individual grain of rice on the planet. Honestly, stealing from them would be morally justifiable", "The human satellite dish company that also endorses slavery - The 'that also endorses slavery' part is silent. This company sells you people to stand on the roof of hour house all day -rain or shine- while holding up a satellite dish", "Bingus Studios - The world's greatest game development company. You hear that they are coming out with a new game soon titled 'The Ultra Awesome Game About Gambling & Other Fun Card Based Activities(TM)!'. Sounds pretty interesting, right?", "Honkerton & Sons - A company that lets you hire clonws to either physically or mentally assault anyone of your choosing", "Live Dawwgs - A company that sells the most delicious hot dogs in the world. The only catch is that they are all sentient and WILL try to kill you as soon as you open them up. Being able to slay and consume the Live Dawwgs is a feat that not many can claim to have achieved", "Liquidator Cola - A cola company that makes drinks with such high sugar contents, that they are in the red on the PH scale. It's called Liquidator Cola because it melts your teeth and kidneys", "Biggol' glasses - A company that makes biggol' glasses for the super visually impaired. They barley work of course, but the comically oversized glasses are too funny to not sell. Some even come with fake moustaches", "A taste of France - A company that claims it can give people the experience of being in Paris from their homes. They do this by injecting an entire baguette into their client's bloodstreams. They like to think it works", "Bridges for hire - A company that will build a bridge anywhere you want for a set amount of time. After that time has passed, they send in shadow agents at nighttime to dismantle the bridge while it sleeps so that it can't defend itself", "Orbulent Airlines - An airline company that takes an avant garde approach to flying passanges through the air. Passangers are loaded into giant inflatable balls and are fired across the sea by a really big cannon", "The Laundromat - A theme park company that has based all of it's rides around home applicances. Like a giant human sized washing machine that allows for you to experience terminal velocity, or a drop tower designed to look like a toaster", "The Sauceification Station - A company that will buy ANYTHING, slather it in a specified sauce, and then sell it back for consumption. You left of your own accord after a customer joked that YOU should be sauceificated, only for your co-workers to stare at you with malicious intent", "Goccia di Spaghetti! - An italian company that puts a little bit of surprise into your life. You can specify a set period of time to them, and at ANY POINT during that time, a drone will drop 5 kilograms of spaghetti bolognese onto your head. You don't know when this will happen, but it always does...", "PeanutBets - A company that stages bettable fights between a random naked person and belgan tiger, except both parties are covered from head to toe in peanut butter. This was done to determine whether humans or tigers have a stronger urge to kill over peanut butter", "Suplex Central - A business offering masterclasses in the art of causing irreversible damge to another person's spinal column. It feels bad to have to embezzle this place", "The Pickle Foundation - A foundation dedicated to asking for either donations, help, or advice from all over the world in an attempt to finally open the CEO's jar of pickles", "Kerosene Castle - A chain superstore that only sells kerosene. Company policy states that employees are not allowed to ask what customers are going to use the kerosene for", "Impostor Syndrome Inc. - A service that allows you to hire someone to steal the identity of anyone you want for a specified amount of time, including yourself, for some reason", "Ultra coolguy time - A company that allows you to hire a group of thugs to assail you on the street, so that you can beat them up in an awesome street fight and impress complete strangers. Everyone thinks that violence is cool!", "Deliberately poor quality cooking utensils weekly - A subscription based service that sends people deliberately poor quality cooking utensils every week. Why? I dunno", "Schmoober - A transportation company that places you in a wagon tied to the back of another moving vehicle set en route to your desired destination. If you make it to your destination alive without falling out of the wagon, then you don't have to pay for your journey", "Moon cleansers LLC - A window cleaning company that clean their windows in a rather indecent manner. They would be shut down, BUT they can clean windows really well, so their mooning gets a pass", "27"};

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, "Hearts", stuff[i]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, "Spades", stuff[i + 13]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, "Diamonds", stuff[i + 26]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, "Clubs", stuff[i + 39]);
		THE_pile.push_back(temp);
	}
}
