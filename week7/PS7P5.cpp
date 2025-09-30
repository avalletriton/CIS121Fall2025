#include<iostream>
using namespace std;
int main()
{
	//variables
	float hours, sumhours, entries, tuition, sumtuition, cost;
	string lname, code;

	//before loop
	entries = 0;
	sumtuition = 0;
	sumhours = 0;
	
	cout << "Please enter your last name (or ctrl z to stop): ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Please enter credit hours: ";
		cin >> hours;
		cout << "Please enter disctrict code (I, O): ";
		cin >> code;

		if (code == "I")
			cost = 250;
		else if (code == "O")
			cost = 550;
		tuition = cost * hours;
		sumtuition = sumtuition + tuition;
		sumhours = sumhours + hours;
		entries = entries + 1;

		cout << "Last name: " << lname << endl;
		cout << "Tuition: $" << tuition << endl;

		cout << "Please enter your last name (or ctrl z to stop): ";
		cin >> lname;
	}
	cout << "Total tuition: $" << sumtuition << endl;
	cout << "Total credit hours: " << sumhours << endl;
	cout << "Number of entries: " << entries << endl;
	return 0;
}