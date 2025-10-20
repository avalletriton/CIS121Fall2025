#include<iostream>
#include<iomanip>
using namespace std;
void comp_tuition(float hours, float aid, float& tuition, float& owed)
{
	tuition = hours * 250;
	owed = tuition - aid;
}
int main()
{
	float hours, aid, tuition, owed, entries, Towed, Aowed;
	string lname;

	Towed = 0;
	entries = 0;

	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Please enter the amount of credit hours: ";
	cin >> hours;
	cout << "Please enter the amount of financial aid you recieved(or press ctrl z to stop): ";
	cin >> aid;

	while (!cin.eof())
	{
		comp_tuition(hours, aid, tuition, owed);

		entries = entries + 1;
		Towed = Towed + owed;
		Aowed = Towed / entries;

		cout << "Last name: " << lname << endl;
		cout << "Tuition cost: $" << tuition << endl;
		cout << "Tutition owed: $" << owed << endl;

		cout << "Please enter your last name: ";
		cin >> lname;
		cout << "Please enter the amount of credit hours: ";
		cin >> hours;
		cout << "Please enter the amount of financial aid you recieved(or press ctrl z to stop): ";
		cin >> aid;
	}
	cout << "Total tuition owed: $" << Towed << endl;
	cout << "Total entries: " << entries << endl;
	cout << "Average amount owed: $" << Aowed << endl;
	return 0;
}