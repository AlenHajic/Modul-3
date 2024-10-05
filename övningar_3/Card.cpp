#include "Card.h"

Card::Card(string name, int cardNumber) : name(name), cardNumber(cardNumber)
{
}

Card::Card() : name("?"), cardNumber(0)
{
}

string Card::getName() const
{
	return this->name;
}

void Card::setName(string newName)
{
	this->name = newName;
}

int Card::getCardNumber() const
{
	return this->cardNumber;
}

void Card::setCardNumber(int newCardNumber)
{
	this->cardNumber = newCardNumber;
}


