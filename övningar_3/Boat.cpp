#include "Boat.h"

Boat::Boat(string name, int length) : name(name), length(length)
{
}

Boat::Boat() : name("?"), length(0)
{
}

string Boat::getName()
{
	return this->name;
}

int Boat::getLength()
{
	return this->length;
}

void Boat::setName(string newName)
{
	this->name = newName;
}

void Boat::setLength(int newLength)
{
	this->length = newLength;
}

string Boat::toString()
{
	string boatInfo = "Name:" + this->name + " Length:" + to_string(this->length);
	return boatInfo;
}


