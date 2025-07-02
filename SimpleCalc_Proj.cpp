//This program is a simple calculator that has implemented the use of a calculator function for easy upgrading and maintenance.
//It is a constant loop that allows for multiple calculations without asking to stop or if they want to continue until
//the user closes the program.

#include<iostream>

using namespace std;

double calculator(double num1, double num2, char op) {

	switch(op) {
		case '+':
			cout << "Result: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Result: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "Result: " << num1 * num2 << endl;
			break;
		case '/':
			if(num2 != 0)
				cout << "Result: " << num1 / num2 << endl;
			else
				cout << "Error: Division by zero!" << endl;
			break;
		default:
			cout << "Error: Invalid operation!" << endl;
	}

	return 0;
}

int main() {

	int x = 0;

	while (x == 0) {

	double num1, num2;
	char op;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Enter the operation (+, -, *, /): ";
	cin >> op;

	calculator(num1, num2, op);

	cout << "" << endl;
	cout << "" << endl;

	}
	

	return 0;
}