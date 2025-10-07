#include<iostream>
#include<iomanip>
using namespace std;
float find_mpg(float miles, float gallons)
{
	float mpg;
	mpg = miles / gallons;
	return mpg;
}
int main()
{
	float miles, gallons, v;
	string destination;

	float Tmiles = 0;
	float tripcount = 0;

	cout << "Please enter destination city: ";
	cin >> destination;
	cout << "Please enter miles to get there: ";
	cin >> miles;
	cout << "Please enter gallons used (or press ctrl z to stop): ";
	cin >> gallons;

	while (!cin.eof())
	{
		v = find_mpg(miles, gallons);
		cout << "Destination: " << destination << endl;
		cout << "Miles per gallon: " << v << endl;
		tripcount = tripcount + 1;
		Tmiles = Tmiles + miles;

		cout << "Please enter destination city: ";
		cin >> destination;
		cout << "Please enter miles: ";
		cin >> miles;
		cout << "Please enter gallons (or press ctrl z to stop): ";
		cin >> gallons;
	}
	cout << "Total miles: " << Tmiles << endl;
	cout << "Trip count: " << tripcount << endl;
	return 0;
}