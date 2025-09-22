#include<iostream>
using namespace std;
int main()
{
	//variables
	float volume, cost, total;
	string location;

	//input
	cout << "Please enter number of tickets you are buying: ";
	cin >> volume;
	cout << "Please enter the location (H, L, Other): ";
	cin >> location;

	//process
	if (volume > 25 || location == "H")
		cost = 30;
	else if (volume > 10 || location == "L")
		cost = 40;
	else
		cost = 50;

	total = cost * volume;

	//output
	cout << "Number of tickets bought: " << volume << endl;
	cout << "Price per ticket: $" << cost << endl;
	cout << "Total: $" << total << endl;
	return 0;
}