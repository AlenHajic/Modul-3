#pragma once
#include <string>
#include <iostream>
using namespace std;
class Participant
{
private:
	string name;
	int startNumber;
public:
	Participant(string name, int startNumber);
	Participant();
	string getName() const;
	void setName(string newName);
	int getStartNumber() const;
	void setStartNumber(int newStartNumber);
	virtual ~Participant() = default;
	virtual string toString() const = 0;
};

class Jumper : public Participant
{
private:
	int counter;
	int jumps[5];
public:
	Jumper(string name, int startNumber);
	Jumper();
	void addJump(int jump);
	int bestJump() const;
	string toString() const override;
};

class Runner : public Participant
{
private:
	int raceTime;
public:
	Runner(string name, int startNumber, int raceTime);
	Runner();
	void setRaceTime(int newRaceTime);
	int getRaceTime() const;
	string toString() const override;
};
