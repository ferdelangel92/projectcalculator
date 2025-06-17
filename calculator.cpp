
/*
	Project:	projectcalculator.
	File:		calculator.cpp
	Date:		April 14th, 2025.
	Author:		(C) Software Engineer. Howard Fernando Del Angel Leija.
	Contact:	ferdelangel92@gmail.com
	Version:	1.0
*/

#include<iostream>

using namespace std;

int main() {

	// Declarables.
	char addition, sustraction, multiplication, division, modulo;
	//float modulo;
	float num1;
	float num2;
	float result;

	// Select the operation.
	cout << " Enter the operation: (+ - * / %) " << endl;
	cin >> addition, sustraction, multiplication, division, modulo;

	cout << " Enter the first number: " << endl;
	cin >> num1;

	cout << " Enter the second number: " << endl;
	cin >> num2;

	switch (addition)
	{
	case '+':
		result = num1 + num2;
		cout << " Result: " << result << endl;	// <- Print the result.
		break;

	case '-':
		result = num1 - num2;
		cout << " Result: " << result << endl;	// <- Print the result.
		break;

	case '*':
		result = num1 * num2;
		cout << " Result: " << result << endl;	// <- Print the result.
		break;

	case '/':
		result = num1 / num2;
		cout << " Result: " << result << endl;	// <- Print the result.
		break;

	/*
	case '%':
		result = num1 % num2;
		cout << " Result: " << result << endl;	// <- Print the result.
		break;
	*/
	}

	return 0;
}


/*
	It is can do operations with decimals.
*/