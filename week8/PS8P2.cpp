#include<iostream>
#include<iomanip>
using namespace std;
float calc_pay(float hours, string jobcode, float Gpay, float overtime)
{
	float rate, pay;
	rate = 0;

	if (jobcode == "L")
		rate = 25;
	else if (jobcode == "A")
		rate = 30;
	else if (jobcode == "J")
	{
		rate = 50;
	}

	float t;
	
	if (hours > 40)
	{
		t = hours - 40;
		overtime = (rate / 2) * t;
		Gpay = rate * 40;
	}
	else
	{
		overtime = 0;
		Gpay = rate * hours;
	}

	pay = Gpay + overtime;
	return pay;
}
int main()
{
	float Tpay, Tentries, hours, Gpay, overtime, p, average_pay;
	string lname, jobcode;

	Tpay = 0;
	Tentries = 0;
	Gpay = 0;
	overtime = 0;


	cout << "Please enter least name: ";
	cin >> lname;
	cout << "Please enter job code (L, A, J): ";
	cin >> jobcode;
	cout << "Please enter hours worked (or press ctrl z to stop): ";
	cin >> hours;

	while (!cin.eof())
	{
		p = calc_pay(hours, jobcode, Gpay, overtime);
		cout << "Employee name: " << lname << endl;
		cout << "Pay: $" << p << endl;

		Tpay = Tpay + p;
		Tentries = Tentries + 1;

		cout << "Please enter least name: ";
		cin >> lname;
		cout << "Please enter job code (L, A, J): ";
		cin >> jobcode;
		cout << "Please enter hours worked (or press ctrl z to stop): ";
		cin >> hours;
	}
	cout << "Total pay: $" << Tpay << endl;
	cout << "Number of entries: " << Tentries << endl;
	average_pay = Tpay / Tentries;
	cout << "Average pay: $" << average_pay << endl;
	return 0;
}