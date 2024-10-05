#include "Boat.h"

sailingBoat::sailingBoat(string name, int length, int sailArea) : Boat(name, length), sailArea(sailArea)
{
}

sailingBoat::sailingBoat() : Boat(), sailArea(0)
{
}

int sailingBoat::getSailArea()
{
	return this->sailArea;
}

void sailingBoat::setSailArea(int newSailArea)
{
	this->sailArea = newSailArea;
}

string sailingBoat::toString()
{
	return Boat::toString() + " Sail Area:" + to_string(this->sailArea);
}
