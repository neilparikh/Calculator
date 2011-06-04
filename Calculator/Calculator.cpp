// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

//Declaration of variables

float a;
int operation;
float b;
float answer;

//This section asks for user input.

	cout<< "Enter the first value" << endl;
	cin>> a;
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

//Output of answer

	cout<< answer;
	cin.ignore();
	cin.get();
}