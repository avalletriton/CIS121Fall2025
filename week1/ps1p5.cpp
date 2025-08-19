#include<iostream>
using namespace std;
int main()
{
	//variables
	float n1;
	float n2;
	float sum;
	float difference;
	float product;

	//input
	cout << "Enter 2 numbers to compute: ";
	cin >> n1;
	cout << n1 << ", ";
	cin >> n2;

	//process
	sum = n1 + n2;
	difference = n1 - n2;
	product = n1 * n2;
	cout << n1 << " + " << n2 << " = " << sum << endl;
	 cout << n1 << " - " << n2 << " = " << difference << endl;
	  cout << n1 << " * " << n2 << " = " << product << endl;
	return 0;
}