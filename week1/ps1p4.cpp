#include<iostream>
using namespace std;
int main()
{
	//variables
	float n1;
	float n2;
	float n3;
	float solution;

	//input
	cout << "Enter a number: ";
	cin >> n1;
	cout << "Enter a second number: ";
	cin >> n2;
	cout << "Enter a third number: ";
	cin >> n3;

	//process
	solution = (n1 + n2) * n3;
	cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << solution;
	return 0;
}