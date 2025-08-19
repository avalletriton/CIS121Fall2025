#include<iostream>
using namespace std;
int main()
{
	//variables
	float num1;
	float num2;
	float solution;

	//input
	cout << "Let's add 2 numbers. Enter in the first number: ";
	cin >> num1;
	cout << num1 << "Enter the second number: ";
	cin >> num2;

	//process
	solution = num1 + num2;
	cout << num1 << " + " << num2 << " = " << solution;
	return 0;
}