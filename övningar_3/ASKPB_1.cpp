#include <iostream>;
#include "MainSystem.h"
using namespace std;

int main()
{
    MainSystem system;

    // Adding runners
    system.addRunner("Alice", 1);
    system.addRunner("Bob", 2);

    //// Adding jumpers
    /*system.addJumper("Charlie", 3, 5);
    system.addJumper("Dave", 4, 5);*/

    //// Add results for runners
    //system.AddARunnersResult(1, 120); // Alice
    //system.AddARunnersResult(2, 110); // Bob

    // Add jumps for jumpers
    //system.AddAJumpersResult(3, 5); // Charlie's jumps
    //system.AddAJumpersResult(3, 7);
    //system.AddAJumpersResult(4, 8); // Dave's jumps
    //system.AddAJumpersResult(4, 6);

    //// Show all participants
    //cout << "\nAll Participants:" << endl;
    //system.showAllParticipants();

    //// Show all runners
    //cout << "\nAll Runners:" << endl;
    //system.showAllRunners();

    // Show all jumpers
    //cout << "\nAll Jumpers:" << endl;
    //system.showAllJumpers();

    //// Show winner of runners
    //cout << "\nWinner of Runners:" << endl;
    //system.showWinnerOfRunners();

    //// Show winner of jumpers
    //cout << "\nWinner of Jumpers:" << endl;
    //system.showWinnerOfJumpers();

    return 0;
}
