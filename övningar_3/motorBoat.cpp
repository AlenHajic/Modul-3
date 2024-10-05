#include "Boat.h"

motorBoat::motorBoat(string name, int length, int motorCap) : Boat(name, length), motorCap(motorCap)
{
}

motorBoat::motorBoat() : Boat(), motorCap(0)
{
}

int motorBoat::getMotorCap()
{
	return this->motorCap;
}

void motorBoat::setMotorCap(int motorCap)
{
	this->motorCap = motorCap;
}

string motorBoat::toString()
{
	return Boat::toString() + " Motor capacity:" + to_string(motorCap);
}