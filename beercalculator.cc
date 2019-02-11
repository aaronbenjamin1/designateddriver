#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
//using namespace std: : this_thread; //sleep_for sleep_until
//using namespace std: chrono; //nanoseconds system clock seconds


int main() {

	//Amount of drinks and calculating weight into grams variables
	int numDrinks = 0;
	int grams = 454;

	//Gender Constants
	float female = .55;
	float male = .68;

	//Amount of drinks
	cout << "How many drinks do you want to have: " << endl;
	cin >> numDrinks;
	cout << "Calculating..." << endl;

	//Weight into grams type thing
	float weight = 0;

	cout << "Insert weight: " << endl;
	cin >> weight;

	//Time stuff
	int time = 0;
	cout << "Insert the amount of hours you plan to drink for: " << endl;
	cin >> time;

	//Choices integer

	int choice = 0;

	cout << "Choose your gender: " << endl;
	cout << "1) Female 2) Male" << endl;

	cin >> choice;

	//Gender constant variables
	float fe1 = (weight * grams) * female;
	float ma2 = (weight * grams) * male;

	//If statements for choice 1
	if (choice == 1) {
		float lastpart1 = (numDrinks * 14) / fe1 * 100;
		float lasttime1 = time * 0.015;
		cout << lastpart1 - lasttime1 << " is your BAC." << endl;
	}

	if (choice == 2) {
		float lastpart2 = (numDrinks * 14) / ma2 * 100;
		float lasttime2 = time * 0.015;
		cout << lastpart2 - lasttime2 << " is your BAC." << endl;

	}
}
