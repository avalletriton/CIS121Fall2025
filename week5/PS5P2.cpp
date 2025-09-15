#include<iostream>
using namespace std;
int main()
{
	//variables
	float quantity;
	float price;
	float total;

	//input
	cout << "How many apples are you buying? (Enter amount in lbs): ";
	cin >> quantity;

	//process
	if (quantity > 100)
		price = 0.10;
	else if (quantity >= 50)
		price = 0.25;
	else
		price = 0.50;

	total = price * quantity;

	//output
	cout << "Price per pound: $" << price << endl;
	cout << "Total: $" << total << endl;
	return 0;
}