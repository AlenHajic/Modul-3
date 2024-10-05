#include "ParticipantHandler.h"

void ParticipantHandler::expand()
{
	int newCapacity = initialCapacity * 2;
	Participant** newArray = new Participant * [newCapacity];

	for (int i = 0; i < nrOf; i++) {
		newArray[i] = participants[i];
	}

	delete[] participants; // Deleting old array but not the participants, they are moved to newArray
	participants = newArray;
	initialCapacity = newCapacity;
}


ParticipantHandler::ParticipantHandler() : initialCapacity(initialCapacity), nrOf(0)
{
	participants = new Participant* [initialCapacity];
}

ParticipantHandler::~ParticipantHandler()
{
	for (int i = 0; i < nrOf; i++) {
		delete participants[i]; // Deleting each Participant object
	}
	delete[] participants; // Deleting the array itself
}

int ParticipantHandler::getNrOf() const
{
	return this->nrOf;
}

void ParticipantHandler::setNrOf(int num)
{
	this->nrOf;
}

void ParticipantHandler::addJumper(string name, int startNum)
{
	if (nrOf >= initialCapacity)
	{
		expand();
	}
	Jumper* jumper = new Jumper(name, startNum);
	participants[nrOf++] = jumper;
}

void ParticipantHandler::addRunner(string name, int startNum)
{
	if (nrOf >= initialCapacity)
	{
		expand();
	}
	Runner* runner = new Runner(name, startNum, 0);
	participants[nrOf++] = runner;
}

//void ParticipantHandler::addParticipant(Participant* participant)
//{
//	if (nrOf >= initialCapacity)
//	{
//		expand();
//	}
//	participants[nrOf++] = participant;
//	
//	
//}

void ParticipantHandler::removeParticipant(int startNumber)
{
	for (int i = 0; i < nrOf; i++) {
		if (participants[i]->getStartNumber() == startNumber) {
			delete participants[i];
			participants[i] = participants[nrOf - 1]; // Move the last element to the current index
			participants[nrOf - 1] = nullptr; // Nullify the last pointer (now moved)
			nrOf--;
			return;
		}
	}
	cout << "Participant with start number " << startNumber << " not found." << endl;
}

//void ParticipantHandler::removeParticipant(int startNumber)
//{
//	for (int i = 0; i < nrOf; i++)
//	{
//		if (participants[i]->getStartNumber() == startNumber)
//		{
//			delete participants[i];
//			for (int j = i; j < nrOf; j++)
//			{
//				participants[j] = participants[j + 1];
//			}
//			nrOf--;
//		}
//	}
//}



Participant* ParticipantHandler::getParticipantByIndex(int index) const
{
	if (index >= 0 && index < nrOf)
	{
		return participants[index];
	}
	return nullptr;
}

Participant* ParticipantHandler::findParticipantByNumber(int startNumber)
{
	for (int i = 0; i < nrOf; i++)
	{
		if (participants[i]->getStartNumber() == startNumber)
		{
			return participants[i];
		}
	}

	return nullptr;
}

