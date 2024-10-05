#pragma once
#include "ParticipantHandler.h"
#include <iostream>
using namespace std;


class MainSystem
{
private:
	ParticipantHandler handler;
public:
	MainSystem();
	~MainSystem();
	void addRunner(string name, int startNumber);
	void addJumper(string name, int startNumber, int amountOfJumpes);
	void removeParticipant(int startNumber);
	void showAllParticipants();
	void showAllRunners();
	void AddARunnersResult(int startNumber, int raceTimeResult);
	void AddAJumpersResult(int startNumber, int jumpResult);
	void showAllJumpers();
	void showWinnerOfRunners();
	void showWinnerOfJumpers();
	
};
