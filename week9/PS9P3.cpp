#include<iostream>
#include<iomanip>
using namespace std;
float find_mpg(float miles, float gallons)
{
	float m;

	m = miles / gallons;
	return m;
}
float find_cost(float gallons)
{
	float c;

	c = gallons * 3.5;
	return c;
}
int main()
{
	float sumcost, cost, miles, gallons, mpg;
	string destination;

	sumcost = 0;

	cout << "Please etner destination city: ";
	cin >> destination;
	cout << "Please eneter miles traveled: ";
	cin >> miles;
	cout << "Please enter the number of gallons used (or press ctrl z to stop): ";
	cin >> gallons;

	while (!cin.eof())
	{
		mpg = find_mpg(miles, gallons);
		cost = find_cost(gallons);
		sumcost = sumcost + cost;

		cout << "Destination: " << destination << endl;
		cout << "Miles per gallon: " << mpg << endl;
		cout << "Cost of gas: $" << cost << endl;

		cout << "Please etner destination city: ";
		cin >> destination;
		cout << "Please eneter miles traveled: ";
		cin >> miles;
		cout << "Please enter the number of gallons used (or press ctrl z to stop): ";
		cin >> gallons;
	}
	cout << "Sum of cost: $" << sumcost << endl;
	return 0;
}