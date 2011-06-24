// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
int i;
i=10;
//Declaration of variables
double a;
int operation;
char previousvalue;
previousvalue = 'n';
const char* symbol;
double b;
double answer = 0;

while (i==10) {

//This section asks for user input.

	if (previousvalue == 'n') {
		cout<< "Enter the first value" << endl;
		cin>> a;
	}
	
	if (previousvalue =='y') {
		a = answer;
	}

	cout<< "Chose an operation:" << endl << "1-Addition" << endl << "2-Subtraction" << endl << "3-Multiplication" << endl << "4-Division" << endl;
	cin>> operation;
	cout<< "Enter the second value" << endl;
	cin>> b;
	
//This section calculates the values.

	if (operation == 1) {
		answer = a + b;
	}

	if (operation == 2) {
		answer = a - b;
	}

	if (operation == 3) {
		answer = a * b;
	}

	if (operation == 4) {
		answer = a / b;
	}

//Changes output

	if (operation == 1) {
		symbol = "+";
	}

	if (operation == 2) {
		symbol = "-";
	}

	if (operation == 3) {
		symbol = "*";
	}

	if (operation == 4) {
		symbol = "/";
	}

//Output of answer

	cout<< a;
	cout<< symbol;
	cout<< b;
	cout<< "=";
	cout<< answer;
	cout<< endl << "Would you like to use this value for your next calculation? <y/n>";
	cin>> previousvalue;
	cout<< "--------------------------------------------------------------------------------";
}
}