/*
Ved Nigam-Period 3-Computer Science 1
In this assignment, we will split a 3 digit number into 3 different numbers with the same characters as the 3 digit number. We will then run a tets to see if the numbers are
"Descending," "Ascending," or "Neither."
*/

//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// Variables
void main() {
	for (int i = 0; i < 30; i++) {

	int x;
	int a;
	int b;
	int c;
	int someThreeDigitNumber;

	// 3 digit integer ascending, descending, or neither
	cout << "Enter a 3 Digit Number . . ." << endl;
	cin >> someThreeDigitNumber;
	


		a = someThreeDigitNumber / 100;

		b = someThreeDigitNumber / 10 % 10;

		c = someThreeDigitNumber % 10;


		if (a > b && b > c) {
			cout << someThreeDigitNumber << " is Descending "; // checks if the number is descending
		}
		else if (a < b && b < c) {
			cout << someThreeDigitNumber << " is Ascending "; // checks if the number is ascending
		}
		else {
			cout << someThreeDigitNumber << " is Neither Ascending or Descending "; // checks if the number is neither ascending or descending
		}

	}

	pause();
}
