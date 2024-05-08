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

void Waste::MISS(Actual_card Loser_time) {
	THE_pile.push_back(Loser_time);
}
//These are the functions that do the things in the .h file

//This is the vector containing the deck of cards. It is very similar to the one used for Blackjack
Waste::Waste() {
	vector<string> stuff = { "The worlds best functioning alarm clocks! - A company that sells alarm clocks that will actually kill you in a very violent manner if you don't get up on time\nSo by definition, they are the best functioning alarm clocks", "White collar crime monthly - A magazine that publishes articles on how to spot and deal with white collar crimes. Clearly, the writers do not read their own material", "The person wash - A company that washes human beings as if they went to a car wash. Complete with that giant cleaning tube thing. You know what I'm talking about", "Totally legit hotels LTD - A company that builds hotels filled with rooms that are designed to mess with you\nYou quit after staying in one once, only to find that the toilet water began to rise after you flushed, your bed was secretly made of cardboard, and your smoke alarm only existed to go off at 3AM for no reason", "RiceCo - The richest company in the world, that owns every individual grain of rice on the planet. Honestly, stealing from them would be morally justifiable", "The human satellite dish company that also endorses slavery - The 'that also endorses slavery' part is silent. This company sells you people to stand on the roof of hour house all day -rain or shine- while holding up a satellite dish", "Bingus Studios - The world's greatest game development company\nYou hear that they are coming out with a new game soon titled 'The Ultra Awesome Game About Gambling & Other Fun Card Based Activities(TM)!'. Sounds pretty interesting, right?", "Honkerton & Sons - A company that lets you hire clonws to either physically or mentally assault anyone of your choosing", "Live Dawwgs - A company that sells the most delicious hot dogs in the world. The only catch is that they are all sentient and WILL try to kill you as soon as you open them up\nBeing able to slay and consume the Live Dawwgs is a feat that not many can claim to have achieved", "Liquidator Cola - A cola company that makes drinks with such high sugar contents, that they are in the red on the PH scale. It's called Liquidator Cola because it melts your teeth and kidneys", "Biggol' glasses - A company that makes biggol' glasses for the super visually impaired. They barley work of course, but the comically oversized glasses are too funny to not sell. Some even come with fake moustaches", "A taste of France - A company that claims it can give people the experience of being in Paris from their homes. They do this by injecting an entire baguette into their client's bloodstreams. They like to think it works", "Bridges for hire - A company that will build a bridge anywhere you want for a set amount of time\nAfter that time has passed, they send in shadow agents at nighttime to dismantle the bridge while it sleeps so that it can't defend itself", "Orbulent Airlines - An airline company that takes an avant garde approach to flying passanges through the air\nPassangers are loaded into giant inflatable balls and are fired across the sea by a really big cannon", "The Laundromat - A theme park company that has based all of it's rides around home applicances. Like a giant human sized washing machine that allows for you to experience terminal velocity, or a drop tower designed to look like a toaster", "The Sauceification Station - A company that will buy ANYTHING, slather it in a specified sauce, and then sell it back for consumption\nYou left of your own accord after a customer joked that YOU should be sauceificated, only for your co-workers to stare at you with malicious intent", "Goccia di Spaghetti! - An italian company that puts a little bit of surprise into your life. You can specify a set period of time to them, and at ANY POINT during that time, a drone will drop 5 kilograms of spaghetti bolognese onto your head\nYou don't know when this will happen, but it always does...", "PeanutBets - A company that stages bettable fights between a random naked person and belgan tiger, except both parties are covered from head to toe in peanut butter\nThis was done to determine whether humans or tigers have a stronger urge to kill over peanut butter", "Suplex Central - A business offering masterclasses in the art of causing irreversible damge to another person's spinal column. It feels bad to have to embezzle this place", "The Pickle Foundation - A foundation dedicated to asking for either donations, help, or advice from all over the world in an attempt to finally open the CEO's jar of pickles", "Kerosene Castle - A chain superstore that only sells kerosene. Company policy states that employees are not allowed to ask what customers are going to use the kerosene for", "Impostor Syndrome Inc. - A service that allows you to hire someone to steal the identity of anyone you want for a specified amount of time, including yourself, for some reason", "Ultra coolguy time - A company that allows you to hire a group of thugs to assail you on the street, so that you can beat them up in an awesome street fight and impress complete strangers. Everyone thinks that violence is cool!", "Deliberately poor quality cooking utensils weekly - A subscription based service that sends people deliberately poor quality cooking utensils every week. Why? I dunno", "Schmoober - A transportation company that places you in a wagon tied to the back of another moving vehicle set en route to your desired destination\nIf you make it to your destination alive without falling out of the wagon, then you don't have to pay for your journey", "Moon cleansers LLC - A window cleaning company that clean windows in a rather indecent manner. They would be shut down, BUT they can clean windows really well, so their mooning gets a pass", "The Trebuchet Guy - This is a company that you call up when somebody has been cramping your style, as it were\nThey will send an inhumanly strong guy with a trebucet over to your desired target. You can figure out the rest from there", "THE CROWBAR limited - A nonprofit company based in Florida. Every year, it gives one lucky citizen THE CROWBAR. When this person has THE CROWBAR, money supplied by the government will flood into their bank account hundreds of dollars at a time every hour\nBUT, every other person in Florida is given the exact loaction of THE CROWBAR bearer every morning at 9AM. It is legal to attack THE CROWBAR bearer and take THE CROWBAR off of them so someone else can reap the benefits\nThis company has turned Florida into a hellscape, but you quit because you had to dress up as the company mascot, Crowby the Crowbar, and kids loved to mutilate you", "Hotpants co. - A company that sells cargo trousers, but each pocket is actually a miniature oven for you to cook food in. They are highly flammable, but very efficient and fashionable", "Chocolate milk brewery - A chain of bars that exclusively sell chocolate milk out of fancy alchohol bottles\nYou were fired after you drank every last drop of chocolate milk at the Azerbaijan location during a heatwave", "Embezzler Holdings - A holdings company that has been sectioned off from the rest of society, due to the fact that every individual member of the company is running an embezzlement scheme against somebody else in the same company\nLittle do they know that you are going to embezzle them all", "Gourmet Bath Water enterprises - Have YOU ever tried gourmet bath water? Yeah, didn't think so. Don't judge", "The barracuda and pancake shack - A fast food chain that serves pancakes alongside cooked barracuda. Live barracuda is also an option for those daring enough to tackle such a meal\nYou got fired for telling a child on their birthday to calm a live barracuda's thrashing via a seductive kiss on the mouth", "The janitorial assassin - An online store open only to janitors. There, you can buy various assassination-related equiptment, such as a water bucket that is always filled with arsenic for some reason\nThe answer as to why anyone would want this stuff really depends on the janitor", "ACFA - The Actually Cool Football Association. It broadcasts games of football that are significantly more interesting to watch. For instance, weapons such as golf clubs and baseball bats are allowed on the pitch\nMultiple balls are in play as all times, but some of them aren't real. One of them is actually shot put ball painted like a football, and another is made of wood, and is nailed to the pitch\nThere is also a guy in a hot air balloon with a tranquiliser rifle floating above the stadium who shoots the players as the game goes on", "Agnostic Andy & Son's renunciation acceleration - A charity of agnostic people who find religious people and ask them to renounce their religion in exchange for 1 billion monies. Not because of any hate or anything like that, but because it would be rather funny", "Meatcubes - A company that makes giant blocks of meat of an uncertain origin, and for an unknown purpose. They're more of a cult really", "Eine Gruppe Herren wird Ihre Genitalien mit einer Bratpfanne zerstoren - I mean really, the title of the business says it all", "The hidden trapdoor company - A company that will build a hidden trapdoor anywhere you want. Where their trapdoors lead is a matter that the company does not disclose", "Cakeiture Ltd. - A company that will forcibly break into the home of anyone that you choose, and replace all of their furniture with cake replicas\nThey frequently comment on how their victims shouldn't have anything to complain about", "Fake Fire exit doors - A comapny that makes fake fire exit doors for some reason. As in, you open them and you are only met with wall\nYou were fired after you comissioned 20 individual fake fire exit doors to be imported in the same building, while a fire was already raging in said building", "SudLaunchers inc. - A company that makes millitary grade explosives and explosive weaponry, except they explode into bath foam. They come in multiple scents and fragrances", "Sharp literature - A book publishing company that only publishes the best curated literature of all time. However, the paper on the books is so sharp that it will slice your hands to pieces just by picking them up\nIs the pursuit of knowledge truly worth it? Maybe", "Taxidermy services - Their slogan is: 'Get your taxes done like a beast!' because it's a company you call to help do your taxes, but everyone on the other end of the phone is a wild animal", "Racc nans LLC - A babysitting and housekeeping service whose idea of housekeeping is to let a gangle of raccoons into your humble abode. Some of them can get the job done, but others are on some pretty thin ice", "Baby Go Go - A company that sells devices that pregnant women can put on their stomachs to give their unborn child full control over their body. The baby decides when to take the device off", "Paradoxical cats for hire - A company that lets you hire THE schrodinger's cat for nondescript purposes. Is it alive? Is it dead? You will never know...\nAlthough, you were fired after you told the general public of Rwanda that the cats were just dead ones that employees find on the side of the street and then put in a box, tanking the company profit by 4.9 billion", "Origami Euthanasia - A euthanasia service that will compress and fold the individual's body into a little origami crane. The potential smell is not their problem", "Death Tennis *Sick guitar solo* - Death Tennis *Sick guitar solo* is a sport broadcast all over the world. It's like tennis, excpet it's situated above a giant pit of fire and spikes\nIf the ball goes off of one side of the court, the ball will form a holographic chain that will link it and the neck of the player who failed to hit it back, so the player will be dragged into the pit of fire and spikes below\nIt's fun for the whole family!", "Totally real fortune cookies - A company that supplies restaraunts with their fotune cookies. Whatever fortune a person gets, the company WILL esnure that it happens\nFor example, if your fortune reads: 'You will be bombarded with 203 cream pies as soon as you open the door to your house after you get home' The you WILL be bombarded with 203 cream pies as soon as you open the door to your house after you get home from the restaraunt", "Homestyle Hibachi - A service that lets you hire a hibachi chef to come to your house, set your dinner table on fire and cook on it for you\nYou left of your own accord after a scarring experience, where a family asked you to cook their live pig as an offering to the devil", "Pidgeon protectors - A bodyguard service for your carrier pidgeons. Hire them, and your carrier pidegon shall be accompanied by four helicopters armed with miniguns" };

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, 1, "Hearts", stuff[i]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, 1, "Spades", stuff[i + 13]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, 1, "Diamonds", stuff[i + 26]);
		THE_pile.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Actual_card temp = Actual_card(i + 1, 1, "Clubs", stuff[i + 39]);
		THE_pile.push_back(temp);
	}
}
