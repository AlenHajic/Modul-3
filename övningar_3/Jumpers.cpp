#include "Participant.h";

Jumper::Jumper(string name, int startNumber) : Participant(name, startNumber), counter(0)
{
}

Jumper::Jumper() : Participant(), counter(0) 
{
}

void Jumper::addJump(int jump)
{
	if (counter < 5)
	{
		jumps[counter++] = jump;
	}
	else
	{
		cout << "Already reached max capacity of jumps(5)" << endl;
	}
}

int Jumper::bestJump() const
{
	int currentBest = 0;
	for (int i = 1; i < counter; i++)
	{
		if (currentBest < this->jumps[i])
		{
			currentBest = this->jumps[i];
		}
	}
	return currentBest;
}

string Jumper::toString() const
{
	return "Name:" + getName() + " Starting number:" + to_string(getStartNumber()) + " and your best jump was:" + to_string(bestJump());
}
