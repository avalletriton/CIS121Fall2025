#include<iostream>
using namespace std;
int main()
{
	//variables
	float Quantity;
	float UnitPrice;
	float ExtendedPrice;

	//input
	cout << "Please enter the quantity of units: ";
	cin >> Quantity;
	cout << "Please enter the unit price: $";
	cin >> UnitPrice;

	//process
	ExtendedPrice = Quantity * UnitPrice;
	cout << "The extended price is $" << ExtendedPrice;
	return 0;
}