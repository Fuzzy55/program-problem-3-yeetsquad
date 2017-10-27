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
	while (!_kbhit());   // generate a random 3 digit number... ex: 124
	_getch();
	cout << '\n';
}
// MAIN
// Defining and Assigning Variable
void main() {
	for (int i = 0; i < 30; i++)
	{

	int someThreeDigitNumber;												// Defining Variables
cout << "Enter a 3 Digit Number : ";
cin >> someThreeDigitNumber;
int a;
int b;
int c;

	a = someThreeDigitNumber / 100;

	b = (someThreeDigitNumber) / 10 % 10; // makes variable names more accurate

	c = someThreeDigitNumber % 10;


	if (a < b && b < c) { // check to see if Ascending
		cout << someThreeDigitNumber << " is Ascending" << endl;
	}
	else if (a > b && b > c) { // check to see if Descending
		cout << someThreeDigitNumber << " is Descending" << endl;
	}
	else  { // check to see if neither
		cout << someThreeDigitNumber << " is Neither Ascending nor Descending" << endl;
	}
}

	pause(); // pauses to see the displayed text
}

