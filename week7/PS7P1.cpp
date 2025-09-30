#include<iostream>
using namespace std;
int main()
{
	//variables
	float sumoftotal, quantity, price, Eprice, Damount, Dprice, sumofdtotal;

	//before loop
	sumoftotal = 0;
	sumofdtotal = 0;
	Dprice = 0;
	Damount = 0;

	cout << "Enter Price (or ctrl z to stop): $";
	cin >> price;

	while (!cin.eof())
	{
		cout << "Enter a quantity of item: ";
		cin >> quantity;

		Eprice = quantity * price;

		if (quantity > 1000)
		{
			Dprice = Eprice * .9;
			Damount = Eprice * .1;
		}
		else
		{
			Dprice = 0;
		}
		sumoftotal = sumoftotal + Eprice;
		sumofdtotal = sumofdtotal + Dprice;

		cout << "Quantity: " << quantity << endl;
		cout << "Price: $" << price << endl;
		cout << "Extended Price: $" << Eprice << endl;
		cout << "Discount amount: $" << Damount << endl;
		cout << "Discounted Price: $" << Dprice << endl;

		cout << "Enter Price (or ctrl z to stop): $";
		cin >> price;
	}
	cout << "Sum of all orders: $" << sumoftotal << endl;
	cout << "Total discounts: $" << sumofdtotal << endl;
	return 0;
}