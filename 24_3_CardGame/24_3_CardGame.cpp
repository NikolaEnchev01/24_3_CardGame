
#include"Card.h"
#include "Deck.h"
#include <iostream>

int main()
{
	Card a{ jack,Hearts };
	a.printCard();

	Card b{ jack,Spades };
	b.printCard();

	std::cout <<"The greater cards is: "<< a.compareCards(a, b)<<"\n\n\n";

	Deck d{};
	d.printDeck();

	d.shuffleDeck();
	std::cout << "\n";
	d.printDeck();
	
	for (int i = 0;i < 90;i++)
	{
		if(d.checkDeckSize()==false)
		{
			break;
		}
		d.dealCard();
	}
	
	return 0;
}
