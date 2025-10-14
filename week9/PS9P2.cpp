#include<iostream>
#include<iomanip>
using namespace std;
float find_average(float hits, float bats)
{
	float b;
	b = hits / bats;
	return b;
}
int main()
{
	float playercount, hits, bats, bat_average;
	string lname;

	playercount = 0;
	
	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Please enter your number of hits: ";
	cin >> hits;
	cout << "Please enter your at-bats (or press ctrl z to stop): ";
	cin >> bats;

	while (!cin.eof())
	{
		bat_average = find_average(hits, bats);
		
		cout << "Last name: " << lname << endl;
		cout << "Batting average: " << bat_average << endl;

		playercount = playercount + 1;

		cout << "Please enter your last name: ";
		cin >> lname;
		cout << "Please enter your number of hits: ";
		cin >> hits;
		cout << "Please enter your at-bats (or press ctrl z to stop): ";
		cin >> bats;
	}
	cout << "Player count: " << playercount << endl;
	return 0;
}