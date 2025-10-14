#include<iostream>
#include<iomanip>
using namespace std;
float find_rate(string code)
{
	float p;
	if (code == "L")
		p = 25;
	else if (code == "A")
		p = 30;
	else if (code == "J")
		p = 50;
	return p;
}
float find_grosspay(float hours, float pay)
{
	float overtime, ahours, overtimepay, apay, gpay;
	if (hours > 40)
	{
		overtime = hours - 40;
		overtimepay = overtime * (pay/2);
		ahours = hours - overtime;
		apay = ahours * pay;
		gpay = overtimepay + apay;
	}
	else
	{
		gpay = hours * pay;
	}
	return gpay;
}
int main()
{
	float sumgrosspay, grosspay, hours, pay;
	string lname, code;

	sumgrosspay = 0;
	cout << "Please enter last name: ";
	cin >> lname;
	cout << "Please enter your job code(L, A, J): ";
	cin >> code;
	cout << "Please enter your hours worked (or press ctrl z to stop): ";
	cin >> hours;

	while (!cin.eof())
	{
		pay = find_rate(code);
		grosspay = find_grosspay(hours, pay);
		sumgrosspay = sumgrosspay + grosspay;
		
		cout << "Last name: " << lname << endl;
		cout << "Gross pay: $" << grosspay << endl;

		cout << "Please enter last name: ";
		cin >> lname;
		cout << "Please enter your job code(L, A, J): ";
		cin >> code;
		cout << "Please enter your hours worked (or press ctrl z to stop): ";
		cin >> hours;
	}
	cout << "Sum of all gross pay: $" << sumgrosspay << endl;
	return 0;
}