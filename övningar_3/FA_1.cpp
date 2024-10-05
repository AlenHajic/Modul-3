#include "Boat.h"
#include <iostream>
using namespace std;

void displayAllBoats(Boat** boats, int nrOf);
float averageSailArea(Boat** boats, int nrOf);
int motorboatsOfCertainMotorCapacity(Boat** boats, int nrOf, int motorCap);

void displayAllBoats(Boat** boats, int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout << boats[i]->toString() << endl;
	}
}

float averageSailArea(Boat** boats, int nrOf)
{
	float totalArea = 0;

	for (int i = 0; i < nrOf; i++)
	{
		sailingBoat* sb = dynamic_cast<sailingBoat*>(boats[i]);
		if (sb)
		{
			totalArea += sb->getSailArea();
		}

	}

	totalArea = (totalArea / nrOf);

	return totalArea;
}

int motorboatsOfCertainMotorCapacity(Boat** boats, int nrOf, int motorCap)
{
	int counter = 0;
	for (int i = 0; i < nrOf; i++)
	{
		motorBoat* mb = dynamic_cast<motorBoat*>(boats[i]);
		if (mb && mb->getMotorCap() == motorCap)
		{
			counter++;
		}
	}

	return counter;
}

int main()
{
	int nrOfBoats = 4;
	int motorCap = 30;

	Boat** boats = new Boat*[nrOfBoats];
	boats[0] = new sailingBoat("Karin", 10, 20);
	boats[1] = new sailingBoat("Steffo", 20, 10);
	boats[2] = new motorBoat("Kadir", 30, 40);
	boats[3] = new motorBoat("Abdul", 40, 30);

	displayAllBoats(boats, nrOfBoats);
	cout << averageSailArea(boats, nrOfBoats) << endl;
	cout << motorboatsOfCertainMotorCapacity(boats, nrOfBoats, motorCap) << endl;
	
	for (int i = 0; i < nrOfBoats; i++)
	{
		delete boats[i];
	}
	delete[] boats;

	return 0;
}

