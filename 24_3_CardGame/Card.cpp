
#include "Card.h"
#include<iostream>

void Card::printCard() const
{
	std::cout <<"Power: "<< this->power <<"\tSuit:"<< this->suit << "\n";
}

Card::Card(PowerType power, SuitType suit)
{
	setPower(power);
	setSuit(suit);
}

void Card::setPower(PowerType power)
{
	this->power = power;
}

void Card::setSuit(SuitType suit)
{
	this->suit = suit;
}

int Card::compareCards(Card card1, Card card2) const
{
	// checks power
	if (card1.power > card2.power)
	{
		return 1;
	}

	if (card1.power < card2.power)
	{
		return 2;
	}

	// if equal returns 0
	return 0;
}

void Card::printCardPlay() const
{
	std::cout << "-----\n";
	std::cout << "|";

	switch (this->power)
	{
	case two: std::cout << "2 ";break;
	case three: std::cout << "3 ";break;
	case four: std::cout << "4 ";break;
	case five: std::cout << "5 ";break;
	case six: std::cout << "6 ";break;
	case seven: std::cout << "7 ";break;
	case eight : std::cout << "8 ";break;
	case nine : std::cout << "9 ";break;
	case ten: std::cout << "10";break;
	case jack: std::cout << "J ";break;
	case queen: std::cout << "Q ";break;
	case king: std::cout << "K ";break;
	case ace: std::cout << "A ";break;
	default:std::cout << "? ";
	}

	switch (this->suit)
	{
	case Diamonds:std::cout << std::atomic_char(3);break;
	case Hearts:std::cout << std::atomic_char(4);break;
	case Clubs:std::cout << std::atomic_char(5);break;
	case Spades:std::cout << std::atomic_char(6);break;
	default:std::cout << "?";
	}

	std::cout <<	 "|\n";
	std::cout << "|   |\n";
	std::cout << "-----\n";
}
Card::~Card()
{
}