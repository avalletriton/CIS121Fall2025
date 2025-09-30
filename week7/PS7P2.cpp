#include<iostream>
using namespace std;
int main()
{
	//variables
	float hits, at_bats, bat_average, Pcount;
	string Lname;

	//before loop
	Pcount = 0.0f;
	bat_average = 0;

	cout << "Please enter your last name (or ctrl z to stop): ";
	cin >> Lname;

	while (!cin.eof())
	{
		cout << "Please enter number of hits: ";
		cin >> hits;
		cout << "Please enter at bats: ";
		cin >> at_bats;

		Pcount = Pcount + 1;
		bat_average = hits / at_bats;

		cout << "Last name: " << Lname << endl;
		cout << "Batting average: " << bat_average << endl;


		cout << "Please enter your last name (or ctrl z to stop): ";
		cin >> Lname;
	}
	cout << "Player count: " << Pcount << endl;
	return 0;
}