#include "Participant.h"

Participant::Participant(string name, int startNumber) : name(name), startNumber(startNumber)
{
}

Participant::Participant() : name("?"), startNumber(0)
{
}

string Participant::getName() const
{
	return this->name;
}

void Participant::setName(string newName)
{
	this->name = newName;
}

int Participant::getStartNumber() const
{
	return this->startNumber;
}

void Participant::setStartNumber(int newStartNumber)
{
	this->startNumber = newStartNumber;
}


