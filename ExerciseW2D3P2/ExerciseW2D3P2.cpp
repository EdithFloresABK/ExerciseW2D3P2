#include <iostream>
using namespace std;

void playGame();

int main()
{
	bool playing = true;
	cout << "Hello, Traveler!" << endl;
	do {
		cout << "Would you like me to give you factors of a number?" << endl;
		int choice;
		bool validChoice = false;
		cout << " 1) Yes 2) No ";
		do {
			cin >> choice;
			if (cin.fail() ||!(choice == 1 || choice==2)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Sorry. That is not a valid choice (1 or 2) \n 1) Play or 2) Quit " << endl;
			}
			else {
				validChoice = true;
				if (choice == 1) {
					playGame();
				}
				else if (choice == 2) {
					playing = false;
				}
			}
		} while (!validChoice);
	} while (playing);


	return 0;
}

void playGame() {
	cout << "Please choose a number ";
	int number;
	bool validNumber = false;

	do {
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Sorry. That is not a valid number. Please give me another ";
		}
		else {
			validNumber = true;
		}
	} while (!validNumber);

	cout << "Thank you!" << endl;
	cout << "The factors of " << number << " are: ";
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	cout << "That was fun!" << endl;
}

