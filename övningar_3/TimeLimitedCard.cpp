#include "Card.h"

TimeLimitedCard::TimeLimitedCard(string name, int cardNumber, int endingYear, int endingMonth) : Card(name, cardNumber), endingYear(endingYear), endingMonth(endingMonth)
{
}

TimeLimitedCard::TimeLimitedCard() : Card(), endingYear(0), endingMonth(0)
{
}

int TimeLimitedCard::getYear() const
{
	return this->endingYear;
}

void TimeLimitedCard::setYear(int newYear)
{
	this->endingYear = newYear;
}

int TimeLimitedCard::getMonth() const
{
	return this->endingMonth;
}

void TimeLimitedCard::setMonth(int newMonth)
{
	this->endingMonth = newMonth;
}


string TimeLimitedCard::toString() const
{
	return "Name:" + getName() + " Cardnumber:" + to_string(getCardNumber()) + " The card will end in " + to_string(this->endingYear) + " on the " + to_string(this->endingMonth) + " month.";
}
