
#include "Deck.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

void Deck::loadDeck()
{

	for (size_t i = 0; i < 52; i++)
	{
		this->deck[i].setPower(static_cast<PowerType>((i % 13)+1));
		this->deck[i].setSuit(static_cast<SuitType>((i % 4)+1));
	}
	this->cardCount = 52;
}

Deck::Deck()
{
	loadDeck();
}

void Deck::printDeck()const
{
	for (int i = 0;i < this->cardCount;i++)
	{
		this->deck[i].printCard();
	}
}

void Deck::printDeckPlay() const
{
	for (int i = 0;i < this->cardCount;i++)
	{
		this->deck[i].printCardPlay();
	}
}

void Deck::shuffleDeck()
{
	if (cardCount != 1)
	{
		for (int i = 0;i < cardCount;i++)
		{
			int j = (rand() + time(0)) % cardCount;
			Card tmp = deck[i];
			deck[i] = deck[j];
			deck[j] = tmp;
		}
	}
}

void Deck::dealCard()
{
	if (this->cardCount <= 0)
	{
		std::cout << "NO CARDS LEFT!\n";
	}
	else
	{
		this->deck[cardCount - 1].printCardPlay();
		this->deck[cardCount - 1].~Card();
		this->cardCount = this->cardCount - 1;
	}
}
bool Deck::checkDeckSize() const
{
	if (this->cardCount == 0)
	{
		std::cout << "Deck Is Empty!\n";return false;
	}
	if (this->cardCount < 0||this->cardCount>52)
	{
		std::cout << "Something went wrong!\n";return false;
	}
	if (this->cardCount > 0)
	{
		std::cout << "There are:" << this->cardCount << " cards in the deck!\n";return true;
	}
}


