#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

using std::shuffle;

Deck::Deck() {
	vector<string> descriptions = { "A used and very gooey plaster", "A red UNO card with the number 2 on it", "An elaborate ice sculpture of the three of hearts. It is bigger than the table you are playing on", "A 400 dollar monopoly money note", "A big poker chip worth 5 chips that is the size of a dinner plate", "A document containing a conspiracy theorist's exposé about why the six of hearts card is a lie spread around the populous by the government", "An empty pizza box. The other players on your table tell you that it was delicious", "The maxilla bone of the casino's latest loser", "An urn filled with the ashes of some other random deck of playing cards", "A copy of the movie Click, starring Adam Sandler", "A thimble that may or may not be covered in blood", "A glazed doughnut the was formerly welded to the underside of the table", "An actual, for real, still beating, human heart", "A singular slice of pepperoni", "A miscellaneous playing card that has been chewed up in someone's mouth to the point of being unrecognisable", "A fortune cookie fortune. It reads 'This fortune is worth the same as the three of spades' whatever that means", "A small drinking glass full of dirt", "A playing card that had been blacked out on both sides. On it reads 'This card is confidential'", "Partially eaten slice of american burger cheese with the number 6 drawn crudely on it in marker pen", "Advice from the dealer to think of something that YOU think could represent whatever the seven of spades could be in this game", "A broken and smashed wing mirror from... your own car??", "A stack of 9 paper plates", "A very large ball of lint and fluff", "A secret recipe for the world's best cookies. No, you can't know what it is. It's a secret", "The queen of spades, except it is drawn crudely on a piece of paper", "What appears to be the spade suit symbol, except it is cut out of a CD", "A slice of unbuttered toast that appears to be at least 3 days old", "A dry slab of play doh. It seems like somebody tried to make it into a playing card, but failed miserably", "Some random YuGiOh card. You can't look at it because you physically wrench in disgust every time your retinas make contact with it", "A rock with a pair of googly eyes glued on to it", "An expert guide on how to play roulette. This will surely be useful!", "The six of rhombuses, part of the secret fifth suit of cards that only cool people know about", "A roll of toilet paper, but each sheet has a picture of the seven of diamonds printed on it", "Somebody's credit card. It doesn't matter whose. It's yours now", "A piece of paper with someone's phone number on it. You elect not to call it", "A fake diamond (The budget of this game isn't high enough to give you a real one)", "A pearl necklace, but the pearls are teeth instead", "A pancake :]", "A copy of the video game God Hand", "An IOU for the ace of clubs card", "An emptied out teabag", "A black and white photograph of you playing the game right now", "A tarot card of The Fool arcana. It depicts a finger pointing right at you", "Some of the green fabric that was scraped off of the baccarat table nearby", "A naan bread that somebody cut a '6' shape out of", "The handle of a golf club. Don't ask where the other end went", "An eight ball. After shaking it, the message says: 'You will probably lose this game'", "A pamphlet about a blackjack related cult", "A birthday cake!! But it's not for you. You are merely borrowing it for this game. Don't get any ideas, scum", "The dealer's business card (He moonlights as a clown)", "A live king crab", "The most delicious sandwich of all time. You are not allowed to know what's in it. You would be jealous" };

	for (int i = 0; i < 13; i++) {
		Card temp = Card(i + 1, "Hearts", descriptions[i]);
		Cardeck.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Card temp = Card(i + 1, "Spades", descriptions[i + 13]);
		Cardeck.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Card temp = Card(i + 1, "Diamonds", descriptions[i + 26]);
		Cardeck.push_back(temp);
	}

	for (int i = 0; i < 13; i++) {
		Card temp = Card(i + 1, "Clubs", descriptions[i + 39]);
		Cardeck.push_back(temp);
	}

}

Card Deck::Get_top_card() {
	return Cardeck.front();
}

void Deck::Remove_top_card(){
	Cardeck.erase(Cardeck.begin());
}

void Deck::Shuffle() {
	random_shuffle(Cardeck.begin(), Cardeck.end());
}