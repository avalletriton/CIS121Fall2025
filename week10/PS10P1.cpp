#include<iostream>
#include<iomanip>
using namespace std;
void comp_total(float quantity, float price, float& total_order, float& tax, float& total)
{
	total = quantity * price;
	tax = total * .07;
	total_order = total + tax;
}
int main()
{
	float quantity, price, sumtotal, total_order, tax, total, sumtax, sumtotalorder;

	sumtotal = 0;
	sumtax = 0;
	sumtotalorder = 0;

	cout << "Please enter quantity: ";
	cin >> quantity;
	cout << "Please enter price (or press ctrl z to stop): $";
	cin >> price;

	while (!cin.eof())
	{
		comp_total(quantity, price, total_order, tax, total);

		sumtotal = sumtotal + total;
		sumtax = sumtax + tax;
		sumtotalorder = sumtotalorder + total_order;

		cout << "Total: $" << total << endl;
		cout << "Tax: $" << tax << endl;
		cout << "Total order: $" << total_order << endl;

		cout << "Please enter quantity: ";
		cin >> quantity;
		cout << "Please enter price (or press ctrl z to stop): $";
		cin >> price;
	}
	cout << "Total of all orders: $" << sumtotal << endl;
	cout << "Total tax of all orders: $" << sumtax << endl;
	cout << "Total order of all orders: $" << sumtotalorder << endl;

	return 0;
}