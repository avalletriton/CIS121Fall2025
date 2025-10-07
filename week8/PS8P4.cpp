#include<iostream>
#include<iomanip>
using namespace std;
float Uprice(string code)
{
	float u;

	if (code == "W")
		u = 10;
	else if (code == "C")
		u = 15;
	else if (code == "G")
		u = 20;
	return u;
}
float find_shipping(string code)
{
	float s;
	if (code == "W")
		s = 2;
	else if (code == "C")
		s = 5;
	else if (code == "G")
		s = 7;
	return s;
}
int main()
{
	float unit_price, shipping, eprice, quantity, entries, total;
	string code;

	entries = 0;

	cout << "Please enter prodcut code (W, C, G): ";
	cin >> code;
	cout << "Please enter quantity: ";
	cin >> quantity;

	while (!cin.eof())
	{
		unit_price = Uprice(code);
		shipping = find_shipping(code);

		eprice = unit_price * quantity;
		total = eprice + shipping;

		entries = entries + 1;

		cout << "Product code: " << code << endl;
		cout << "Unit price: $" << unit_price << endl;
		cout << "Shipping cost: $" << shipping << endl;
		cout << "Extended price: $" << eprice << endl;
		cout << "Total: $" << total << endl;

		cout << "Please enter prodcut code (W, C, G): ";
		cin >> code;
		cout << "Please enter quantity: ";
		cin >> quantity;
	}
	cout << "Total entries: " << entries << endl;
}
