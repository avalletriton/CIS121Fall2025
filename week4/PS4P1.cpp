#include<iostream>
using namespace std;
int main()
{
	//variables
	float quantity;
	float Uprice;
	float Eprice;
	float tax;
	float total;

	//process
	cout << "Please enter the quantity of the item: ";
	cin >> quantity;
	if (quantity >= 1000)
	{
		Uprice = 3;
	}
	else
	{
		Uprice = 5;
	}
	Eprice = Uprice * quantity;
	tax = Eprice * 0.07;
	total = Eprice + tax;

	//output
	cout << "Quantity: " << quantity << endl;
	cout << "Unit Price: $" << Uprice << endl;
	cout << "Extended price: $" << Eprice << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;
	return 0;
}