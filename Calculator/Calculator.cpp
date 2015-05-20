// Calculator.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
	//Declaration of variables
	double a;
	int operation;
	double b;
	double answer = 0;
	string previousvalue = "No";
	string quit = "no";
	const char* symbol;

	while (quit == "no" || quit == "No") {
	
	//This section asks for user input.

		if (previousvalue == "no" || previousvalue == "No") {
			cout<< "Enter the first value: ";
			cin>> a;
		}
	// If they choose to use their previous value, use that value instead
		else if (previousvalue =="yes" || previousvalue == "Yes") {
			a = answer;
			cout<< "Enter the first value: " << a  << endl;
		}

		cout<< "Chose an operation:\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division\n";
		cin>> operation;
		cout<< "Enter the second value: ";
		cin>> b;
		
	//This section calculates the values and determines the symbol to use in output

		if (operation == 1) {
			answer = a + b;
			symbol = "+";
		}

		else if (operation == 2) {
			answer = a - b;
			symbol = "-";
		}

		else if (operation == 3) {
			answer = a * b;
			symbol = "*";
		}

		else if (operation == 4) {
			answer = a / b;
			symbol = "/";
		}

		//Output of answer

		cout << a << symbol << b << "=" << answer;
		
		//Asks if you want to quit or use the answer for the next operation

		cout << "\nWould you like to quit? (yes/no) ";
		cin >> quit;
		while (quit != "Yes" && quit != "yes" && quit != "No" && quit != "no") {
			cout << "Enter a proper choice. ";
			cin >> quit;
		}
		if (quit == "yes" || quit == "Yes") break;
		cout << "Would you like to use this value for your next calculation? (yes/no) ";
		cin >> previousvalue;
		while (previousvalue != "Yes" && previousvalue != "yes" && previousvalue != "No" && previousvalue != "no") {
			cout << "Enter a proper choice. ";
			cin >> previousvalue;
		}
		cout<< "---\n";
	}
}