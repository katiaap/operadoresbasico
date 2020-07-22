#include<iostream>
using namespace std;

void main() {
	int val1 = 0, val2 = 0;

	cout << " \tBasic Operators" << endl;
	cout << " \t---------------" << endl;

	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;

	cout << "\nAddition of " << val1 << " and " << val2 << " is " << (val1 + val2) << endl;
	cout << "Multiplication of " << val1 << " by " << val2 << " is " << (val1 * val2) << endl;
	cout << "Subtraction of " << val1 << " and " << val2 << " is " << (val1 - val2) << endl;
	cout << "Division of " << val1 << " by " << val2 << " is " << (val1 / val2) << endl;
	cout << "Modulus of " << val1 << " by " << val2 << " is " << (val1 % val2) << endl;

	
	cout << "\nIs " << val1 << " greater than " << val2 << " => " << (val1 > val2) << endl;
	cout << "Is " << val1 << " smaller than " << val2 << " => " << (val1 < val2) << endl;
	cout << "Is " << val1 << " greater or Equal to " << val2 << " => " << (val1 >= val2) << endl;
	cout << "Is " << val1 << " smaller or Equal to " << val2 << " => " << (val1 <= val2) << endl;
	cout << "Is " << val1 << " Different to " << val2 << " => " << (val1 != val2) << endl;
	cout << "Is " << val1 << " equal to" << val2 << " => " << (val1 == val2) << endl;

 }