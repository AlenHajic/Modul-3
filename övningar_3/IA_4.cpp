#include "Boat.h"
#include <iostream>
using namespace std;

void displayMotorboats(motorBoat** motorboats, int nrOf);
void displaySailingboats(sailingBoat** sailingboats, int nrOf);
int averageSailArea(sailingBoat** sailingboats, int nrOf);
int motorboatsOfCertainMotorCapacity(motorBoat** motorboats, int nrOf, int motorCap);

void displayMotorboats(motorBoat** motorboats, int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout << motorboats[i]->toString() << endl;
	}
}

void displaySailingboats(sailingBoat** sailingboats, int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout << sailingboats[i]->toString() << endl;
	}
}

int averageSailArea(sailingBoat** sailingboats, int nrOf)
{
	float totalArea = 0;

	for (int i = 0; i < nrOf; i++)
	{
		totalArea += sailingboats[i]->getSailArea();
	}

	totalArea = (totalArea / nrOf);

	return totalArea;
}

int motorboatsOfCertainMotorCapacity(motorBoat** motorboats, int nrOf, int motorCap)
{
	int counter = 0;
	for (int i = 0; i < nrOf; i++)
	{
		if (motorboats[i]->getMotorCap() == motorCap) ++counter;
	}

	return counter;
}

int main()
{
	int nrOfSailingBoats = 2;
	int nrOfMotorBoats = 2;
	int motorCap = 30;

	sailingBoat** sailingBoats = new sailingBoat*[nrOfSailingBoats];
	motorBoat** motorBoats = new motorBoat*[nrOfSailingBoats];

	sailingBoats[0] = new sailingBoat("Karin", 10, 20);
	sailingBoats[1] = new sailingBoat("Steffo", 20, 10);

	motorBoats[0] = new motorBoat("Kadir", 30, 40);
	motorBoats[1] = new motorBoat("Abdul", 40, 30);

	displayMotorboats(motorBoats, nrOfMotorBoats);
	displaySailingboats(sailingBoats, nrOfSailingBoats);
	cout << averageSailArea(sailingBoats, nrOfSailingBoats) << endl;
	cout << motorboatsOfCertainMotorCapacity(motorBoats, nrOfMotorBoats, motorCap) << endl;

	for (int i = 0; i < nrOfSailingBoats; i++)
	{
		delete sailingBoats[i];
	}

	delete[] sailingBoats;

	for (int i = 0; i < nrOfMotorBoats; i++)
	{
		delete motorBoats[i];
	}

	delete[] motorBoats;


}
