#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;


int main() {
	// Create an array of strings with a size of 10.
	const int invSize = 10;
	int itemCount = 0;
	unsigned int advTime = 4;
	string inv[invSize];





	// Tell the story
	cout <<"You are the child of a slain farmer, waiting for the day when\nyour uncle releases you from his care so that you can venture \non your own. One that fateful day, you take up three items to \naccompany you during your travels; what will you choose?\n\n";
	sleep(advTime);




	// Player starts with 3 items.
	string choice1;
	string choice2;
	string choice3;

	cout << "You have found these items around the house!\n";
	inv[itemCount++] = "Knapsack"; 
	inv[itemCount++] = "Oatmeal"; 
	inv[itemCount++] = "Sword"; 

	for (int i = 0; i < itemCount; i++){
		cout << inv[i] << endl;
	}
	sleep(advTime);

	cout << "\nYou leave the home you've always known, and you trek the unknown...\n\n\n\n";
	sleep(advTime);




	// First discovery of item
	cout << "You have found a new item!\nIt's a Mountain Pack!\n\n";
	cout << "Do you want to switch out this item with your " << inv[0] << "?\n";

	string answer1;
	cin >> answer1;
	if(answer1 == "Yes" || answer1 == "yes" || answer1 == "yeah"){
		cout << "Name your new item!\n";
		cin >> choice1;
		inv[0] = choice1;
		cout << "You have traded Knapsack for " << choice1 << "\n\n";

		cout << "Here is your new inventory:\n";
		for (int i = 0; i < itemCount; i++){
		cout << inv[i] << endl;
		}
	}
	else if(answer1 == "No" || answer1 == "no" || answer1 == "nah"){
		cout << "You leave the found item behind.\n";
	}
	else {
		cout << "You suddenly suffered a heart attack and died due to incoherence.\n\n";
		return 0;
	}
	
	cout << "You continue on your travels after the finding...\n\n\n\n";
	sleep(advTime * 2);




	// Second discovery of item
	cout << "You have found a new item!\nIt's a Can of Pringles!\n\n";
	cout << "Do you want to switch out this item with your " << inv[1] << "?\n";

	string answer2;
	cin >> answer2;
	if(answer2 == "Yes" || answer2 == "yes" || answer2 == "yeah"){
		cout << "Name your new item!\n";
		cin >> choice2;
		inv[1] = choice2;
		cout << "You have traded Knapsack for " << choice2 << "\n\n";

		cout << "Here is your new inventory:\n";
		for (int i = 0; i < itemCount; i++){
		cout << inv[i] << endl;
		}
	}
	else if(answer2 == "No" || answer2 == "no" || answer2 == "nah"){
		cout << "You leave the found item behind.\n";
	}
	else {
		cout << "You suddenly suffered a heart attack and died due to incoherence.\n\n";
		return 0;
	}
	
	cout << "You continue on your travels after the finding...\n\n\n\n";
	sleep(advTime * 2);




	// Third discovery of item
	cout << "You have found a new item!\nIt's the most powerful weapon, LazerSword!\n\n";
	cout << "Do you want to switch out this item with your " << inv[2] << "?\n";

	string answer3;
	cin >> answer3;
	if(answer3 == "Yes" || answer3 == "yes" || answer3 == "yeah"){
		cout << "Name your new item!\n";
		cin >> choice3;
		inv[2] = choice3;
		cout << "You have traded Knapsack for " << choice3 << "\n\n";

		cout << "Here is your new inventory:\n";
		for (int i = 0; i < itemCount; i++){
		cout << inv[i] << endl;
		}
	}
	else if(answer3 == "No" || answer3 == "no" || answer3 == "nah"){
		cout << "You leave the found item behind.\n";
	}
	else {
		cout << "You suddenly suffered a heart attack and died due to incoherence.\n\n";
		return 0;
	}
	cout << "You continue on your travels after the finding...\n\n\n\n";
	sleep(advTime * 2);




	// Encounter with a Bandit
	string decision1;


	cout << "You have encountered a bandit!!! {Dramatic music ensues}\n\n";
	sleep(advTime / 2);

	cout << "Bandit: If you want to pass this point, give me your most valuable object right now.\n I don't want to fight you, but if I have to, I will.\n";
	sleep(advTime / 2);
	cout << "\nHere is your inventory:\n\n";
		for (int i = 0; i < itemCount; i++){
			cout << inv[i] << endl;
		}
		
	cout << "\nWhat do you do?\n" << "[fight]  [flee]  [give]\n";
		cin >> decision1;
		if(decision1 == "fight") {
			cout << "\n{ching, shing, ding}\n\n";
			sleep(advTime / 2);
			cout << "You tried your best, but you were not skilled enough to fight. You were killed in the engagement.\n";
			return 0;
		}
		else if(decision1 == "flee") {
			cout << "\n{Panting and quickened footsteps}\n\n";
			sleep(advTime);
			cout << "As you tried to flee, the bandit caught up with you,\n grabbed you, and tossed you into the river. You were never seen again.\n";
			return 0;
		}
		else if(decision1 == "give") {
			cout << "\nYou have chosen to give your most valuable object to the bandit.\n";
			cout << "Select an item in your inventory to give to the bandit so that you may pass.\n";
			string input;
			cin >> input;

			for (int i = 0; i < itemCount; i++) {
				if(inv[i].find(input) == string::npos){
				}
				else {
					cout << "You have selected " << inv[i] << "\n";
					inv[i] = itemCount - 1;
					break;
				}
				if(i == itemCount - 1) {
					if (inv[i].find(input) == string::npos){
					cout << "Bandit: What are you doing? You're wasting my time, I'm done with you!!.\n";
					sleep(advTime);
					cout << "The Bandit decides to attack anyway due to your lollygagging. And now you're dead.\n";
					return 0;
					}
				}
			}
		}
		else {
			cout << "You have suffered a heart attack due to a nervous breakdown.\n";
			return 0;
		}
	

	cout << "\nHere is your final inventory:\n\n";
	for (int i = 0; i < itemCount; i++){
		cout << inv[i] << endl;
	}
	sleep(advTime);

	cout << "\nAfter giving your most valued object to the Bandit, you passed the bridge and \ncontinued on your adventure to find yourself...\n";

	
}
