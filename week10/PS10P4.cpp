#include<iostream>
#include<iomanip>
using namespace std;
void find_cost(float widgets, float& cost, float& Ecost, float& tax, float& total_order)
{
	if (widgets > 10000)
		cost = 4;
	else if (widgets > 5000)
		cost = 5;
	else
		cost = 10;

	Ecost = cost * widgets;
	tax = Ecost * .07;
	total_order = Ecost + tax;
}
int main()
{
	float widgets, cost, Ecost, tax, total_order, sumtotal_order;
	sumtotal_order = 0;

	cout << "Please enter number of widgets (or press ctrl z to stop): ";
	cin >> widgets;

	while (!cin.eof())
	{
		find_cost(widgets, cost, Ecost, tax, total_order);

		cout << "Number of widgets: " << widgets << endl;
		cout << "cost per widget: $" << cost << endl;
		cout << "Extended price: $" << Ecost << endl;
		cout << "Tax: $" << tax << endl;
		cout << "Total order: $" << total_order << endl;

		sumtotal_order = sumtotal_order + total_order;

		cout << "Please enter number of widgets (or press ctrl z to stop): ";
		cin >> widgets;
	}
	cout << "Sum of total order: $" << sumtotal_order << endl;
	return 0;
}