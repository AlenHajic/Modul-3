#include "MainSystem.h"

MainSystem::MainSystem()
{
}

MainSystem::~MainSystem()
{
}

void MainSystem::addRunner(string name, int startNumber)
{
	handler.addRunner(name, startNumber);
	handler.setNrOf(1);

}

void MainSystem::addJumper(string name, int startNumber, int amountOfJumpes)
{
	
	handler.addJumper(name, startNumber);
	handler.setNrOf(1);
}



void MainSystem::removeParticipant(int startNumber)
{
	handler.removeParticipant(startNumber);
}

void MainSystem::showAllParticipants()
{
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		cout << handler.getParticipantByIndex(i)->toString() << endl;
	}
}

void MainSystem::showAllRunners()
{
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Runner* runner = dynamic_cast<Runner*>(handler.getParticipantByIndex(i));
		if (runner)
		{
			cout << runner->toString() << endl;
		}
	}
	
}

void MainSystem::showAllJumpers()
{
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Jumper* jumper = dynamic_cast<Jumper*>(handler.getParticipantByIndex(i));
		if (jumper)
		{
			cout << jumper->toString() << endl;
		}
	}
}

void MainSystem::AddARunnersResult(int startNumber, int raceTimeResult)
{
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Runner* runner = dynamic_cast<Runner*>(handler.getParticipantByIndex(i));
		if (runner && runner->getStartNumber() == startNumber)
		{
			runner->setRaceTime(raceTimeResult);
		}
	}
}

void MainSystem::AddAJumpersResult(int startNumber, int jumpResult)
{
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Jumper* jumper = dynamic_cast<Jumper*>(handler.getParticipantByIndex(i));
		if (jumper && jumper->getStartNumber() == startNumber)
		{
			jumper->addJump(jumpResult);
		}
	}
}

void MainSystem::showWinnerOfRunners()
{
	int currentBestResult = INT_MAX; // Lower times are better
	Runner* winner = nullptr;
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Runner* runner = dynamic_cast<Runner*>(handler.getParticipantByIndex(i));
		if (runner && runner->getRaceTime() < currentBestResult)
		{
			currentBestResult = runner->getRaceTime();
			winner = runner;
		}
	}

	if (winner)
	{
		cout << "Runner winner: " + winner->getName() << " with time: " << winner->getRaceTime() << endl;
	}
	else
	{
		cout << "No winner was found." << endl;
	}
}

void MainSystem::showWinnerOfJumpers()
{
	int currentBestResult = 0; // Higher jumps are better
	Jumper* winnerOfJumpers = nullptr;
	for (int i = 0; i < handler.getNrOf(); i++)
	{
		Jumper* jumper = dynamic_cast<Jumper*>(handler.getParticipantByIndex(i));
		if (jumper && jumper->bestJump() > currentBestResult)
		{
			currentBestResult = jumper->bestJump();
			winnerOfJumpers = jumper;
		}
	}

	if (winnerOfJumpers)
	{
		cout << "Jumper winner: " + winnerOfJumpers->getName() << " with jump: " << currentBestResult << endl;
	}
	else
	{
		cout << "No winner was found." << endl;
	}

}
