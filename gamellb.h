#include <iostream>
#include <cstdlib>
using namespace std;

int health = 1000;

int part1() {
	// Get a different random number each time the program runs.
	srand(time(0));
	//Actually makes the random number.
	int randNum = rand() % 230;
	//Removes the randNum from health.
	cout << health - randNum;
	return 0;
}
