#include<iostream>
using namespace std;
int main()
{
	 //variables
	float entries, pay, totalpay, sumpay, hours, overtime, overtimepay, totalentries, averagepay;
	string job, lname;

	//before loop
	entries = 0;
	pay = 0;
	sumpay = 0;
	overtimepay = 0;
	overtime = 0;
	cout << "Please enter last name (or ctrl z to stop): ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Please enter job code (L, A, J): ";
		cin >> job;
		cout << "Please enter hours worked: ";
		cin >> hours;
		if (job == "L")
			pay = 25;
		else if (job == "A")
			pay = 30;
		else if (job == "J")
			pay = 50;
		if (hours > 40)
		{
			overtime = hours - 40;
		}
		else
		{
			overtime = 0;
		}
		overtimepay = overtime * (pay / 2);
		totalpay = ((hours - overtime) * pay) + overtimepay;
		sumpay = sumpay + totalpay;
		entries = entries + 1;
		cout << "Last name: " << lname << endl;
		cout << "Job code: " << job << endl;
		cout << "Hours worked: " << hours << endl;
		cout << "Pay: $" << totalpay << endl;
		cout << "Please enter last name (or ctrl z to stop): ";
		cin >> lname;
	}
	averagepay = sumpay / entries;
	cout << "Sum of pay: $" << sumpay << endl;
	cout << "Average pay: $" << averagepay << endl;
	cout << "Number of entries: " << entries << endl;
	return 0;
}