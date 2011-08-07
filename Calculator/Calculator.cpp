// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
int i;
i=10;
//Declaration of variables
double a;
int operation;
string previousvalue = "No";
string quit = "no";
const char* symbol;
double b;
double answer = 0;

while (quit == "no" || quit == "No") {

//This section asks for user input.

	if (previousvalue == "no" || previousvalue == "No") {
		cout<< "Enter the first value" << endl;
		cin>> a;
	}
	
	if (previousvalue =="yes" || previousvalue == "Yes") {
		a = answer;
		cout<< "Enter the first value" << endl << a  << endl;
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
	
	//Asks if you want to quit or use the answer for the next operation

	cout<< endl << "Would you like to quit?";
	cin>> quit;
	while (quit != "Yes" && quit != "yes" && quit != "No" && quit != "no") {
		cout<< "Enter a proper choice. ";
		cin>> quit;
	}
	if (quit == "yes" || quit == "Yes")
		break;
	cout<< "Would you like to use this value for your next calculation? ";
	cin>> previousvalue;
	while (previousvalue != "Yes" && previousvalue != "yes" && previousvalue != "No" && previousvalue != "no") {
		cout<< "Enter a proper choice. ";
		cin>> previousvalue;
	}
	system("cls");
	//cout<< "--------------------------------------------------------------------------------";
}
}