#include "Participant.h"

Runner::Runner(string name, int startNumber, int raceTime) : Participant(name, startNumber), raceTime(raceTime)
{
}

Runner::Runner() : Participant(), raceTime(0)
{
}

void Runner::setRaceTime(int newRaceTime) 
{
	this->raceTime = newRaceTime;
}

int Runner::getRaceTime() const
{
	return this->raceTime;
}

string Runner::toString() const
{
	return "Name:" + getName() + " Starting number:" + to_string(getStartNumber()) + " and your race time was:" + to_string(this->raceTime);
}
