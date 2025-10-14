#include<iostream>
#include<iomanip>
using namespace std;
float find_total(float quantity, float price)
{
	float t;
	t = quantity * price;
	return t;
}
float check_discount(float total)
{
	float d;
	if (total > 10000)
		d = total * 0.1f;
	else if (total <= 10000)
		d = total * 0.05f;
	return d;
}
int main()
{
	float sumtotal, total, sumdtotal, dtotal, price, quantity;

	sumtotal = 0;
	sumdtotal = 0;
	cout << "Please enter quantity: ";
	cin >> quantity;
	cout << "Please enter price (or press ctrl z to stop): $";
	cin >> price;

	while (!cin.eof())
	{
		total = find_total(quantity, price);
		dtotal = check_discount(total);
		sumtotal = sumtotal + total;
		sumdtotal = sumdtotal + dtotal;

		cout << "Total: $" << total << endl;
		cout << "Discount total: $" << dtotal << endl;

		cout << "Please enter quantity: ";
		cin >> quantity;
		cout << "Please enter price (or press ctrl z to stop): $";
		cin >> price;
	}
	cout << "Sum of totals: $" << sumtotal << endl;
	cout << "Sum of discount total: $" << sumdtotal << endl;
	return 0;
}