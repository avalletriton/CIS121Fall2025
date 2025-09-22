#include<iostream>
using namespace std;
int main()
{
	//Variables
	float quantity, price, Eprice, tax, total;
	string status;

	//input
	cout << "Please enter the quantity of the item you are buying: ";
	cin >> quantity;
	cout << "Please enter the status (A, B, C, D): ";
	cin >> status;

	//process
	if (quantity > 10000 && status == "A")
		price = 10;
	else if (quantity > 10000 && status == "B")
		price = 12;
	else if (quantity >= 5000 && status == "C")
		price = 20;
	else if (quantity >= 5000 && status == "D")
		price = 22;
	else
		price = 30;

	Eprice = quantity * price;
	tax = Eprice * .07;
	total = Eprice + tax;

	//output
	cout << "Extended price: $" << Eprice << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;
	return 0;
}