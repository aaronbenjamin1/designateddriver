#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {

	//Hold on I'm getting side tracked
	int numDrinks = 0;
	int grams = 454;

	//Gender Constants
	float female = .55;
	float male = .68;


	//Amount of drinks
	cout << "How many drinks have you/do you want: " << endl;
	cin >> numDrinks;
	cout << "Hold on let's do some quick math..." << endl;

	//delay
	//sleep_for(nanoseconds(15));
	//sleep_until(system_clock::now() + seconds(2));

	//Amount of grams in a standard American alcoholic drink is 14. That's why we multiplied it by 14.
	float weight = 0;

	cout << "Insert weight: " << endl;
	cin >> weight;

	//Takes amount of grams in drink
	//float numGrams = 0;

	//cout << "How many grams of alcohol are in this drink?" << endl;
	//cin >> numGrams;


	//Time stuff now
	int time = 0;
	cout << "Insert amount of hours drinking: " << endl;
	cin >> time;


	//If statement time let's try not to fuck this up like last time.

	int choice = 0;

	cout << "Choose your gender: " << endl;
	cout << "1) Female 2) Male" << endl;


	cin >> choice;

	float fe1 = (weight * grams) * female;
	float ma2 = (weight * grams) * male;

	if (choice == 1) {
		float fecrazy = fe1 * 100;
		float crazy1 = (numDrinks * numGrams);
		float crazytime1 = time * 0.015;
	}

	if (choice == 2) {
		float lastpart2 = (numDrinks * numGrams) / ma2 * 100;
		float lasttime2 = time * 0.015;
		cout << lastpart2 - lasttime2 << " is your BAC." << endl;
	}
}
