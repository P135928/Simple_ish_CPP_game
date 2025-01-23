#include <iostream>
#include <random>
using namespace std;

int health = 100;

int part1() {
	random_device rd;
    mt19937 gen(rd());

    // Define the range
    int min = 1;
    int max = 10;
    uniform_int_distribution<> distrib(min, max);
    for (int i = 0; i < 1; ++i) {
    int randomNumber = distrib(gen);
    cout << "Random number " << i + 1 << ": " << randomNumber << endl;
    cout << health - randomNumber;
	}
	return 0;
} 
