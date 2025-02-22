#include <iostream>
#include <random>
#include "gamelib.h"
using namespace std;

int health;
int maxNum;
int charater;

int main() {
	// Asks the user for what they wanna be.
	cout << "Who do you want to be? \n";
	cout << "1. A warrior\n";
	cout << "2. A wizard\n";
	cout << "3. A thief\n";
	cout << "4. A ranger\n";
	cin >> charater;
	switch(charater) {
		case 1:
			health = 100;
			break;
		case 2:
			health = 50;
			break;
		case 3:
			health = 25;
			break;
		case 4:
			health = 75;
			break;
	}
	// Calls the function with 2 paramaters. Health and maxNumber
	healthSub(health, 50);
	system("pause");
}
