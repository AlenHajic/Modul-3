#include "Card.h"

ClipCard::ClipCard(string name, int cardNumber, int sessionsLeft) : Card(name, cardNumber), sessionsLeft(sessionsLeft)
{
}

inline ClipCard::ClipCard() : Card(), sessionsLeft(0)
{
}

inline int ClipCard::getSessionsLeft() const
{
	return this->sessionsLeft;
}

void ClipCard::AddSession(int amountToAdd)
{
	this->sessionsLeft += amountToAdd;
}

void ClipCard::useSession(int amountToUse)
{
	this->sessionsLeft -= amountToUse;
}



inline string ClipCard::toString() const
{
	return "Name:" + getName() + " Cardnumber:" + to_string(this->getCardNumber()) + " Sessions left:" + to_string(this->sessionsLeft);
}
