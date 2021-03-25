#pragma once

#include"Card.h"

class Deck
{
public:
	Deck();
	void shuffleDeck();
	void printDeck() const;
	void printDeckPlay() const;
	void loadDeck();
	void dealCard();
	bool checkDeckSize() const;

private:
	
	Card deck[52];
	int cardCount{ 0 };
};

