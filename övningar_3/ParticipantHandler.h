#pragma once
#include "Participant.h"
#include <string>
using namespace std;

class ParticipantHandler
{
private:
	Participant** participants;
	int nrOf;
	int initialCapacity = 2;

	void expand();
public:
	ParticipantHandler();
	~ParticipantHandler();
	int getNrOf() const;
	void setNrOf(int num);
	void addJumper(string name, int startNum);
	void addRunner(string name, int startNum);
	void removeParticipant(int startNumber);
	Participant* getParticipantByIndex(int index) const;
	Participant* findParticipantByNumber(int startNumber);
};