#include<iostream>
using namespace std;
int main()
{
	//variables
	float quantity, cost, total;
	string part;
	
	//input
	cout << "Please enter the part number (10, 99, 55, 70, 50): ";
	cin >> part;
	cout << "Please enter the quantity: ";
	cin >> quantity;

	//process
	if (part == "10" && quantity > 1000)
		cost = 1;
	else if (part == "99" && quantity > 500)
		cost = 2;
	else
		cost = 5;

	total = cost * quantity;

	//output
	cout << "Part number: " << part << endl;
	cout << "Cost per unit: $" << cost << endl;
	cout << "Total: $" << total << endl;
	return 0;
}