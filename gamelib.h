#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Makes a function with 2 paramaters health, maxNumber
int part1(int health, int maxNum) {
	// Get a different random number each time the program runs.
	srand(time(0));
	// Actually makes the random number.
	int randNum = rand() % maxNum;
	// Removes the randNum from health.
	return health - randNum;
}
