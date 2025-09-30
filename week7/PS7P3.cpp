#include<iostream>
using namespace std;
int main()
{
	//variables
	float Mtraveled, gallons, MperG, SumMtraveled, TripCount;
	string Destination;

	//before loop
	TripCount = 0;
	SumMtraveled = 0;
	cout << "Please enter destination city (or ctrl z to stop): ";
	cin >> Destination;

	while (!cin.eof())
	{
		cout << "Please enter miles traveled: ";
		cin >> Mtraveled;
		cout << "Please enter gallons of gasoline used: ";
		cin >> gallons;

		MperG = Mtraveled / gallons;
		TripCount = TripCount + 1;
		SumMtraveled = SumMtraveled + Mtraveled;

		cout << "Destination: " << Destination << endl;
		cout << "Miles per Gallon: " << MperG << endl;
		cout << "Please enter destination city (or ctrl z to stop): ";
		cin >> Destination;
	}
	cout << "Sum of miles traveled: " << SumMtraveled << endl;
	cout << "Trip count: " << TripCount << endl;
	return 0;
}