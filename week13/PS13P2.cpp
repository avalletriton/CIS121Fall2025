#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
struct employee 
{
	string fname;
	string lname;
	int hours;
	int rate;
	int grosspay;
};
int comp_grosspay(int hours, int rate)
{
	int overtime, overtimepay, pay, g;

	if (hours > 40)
	{
		overtime = hours - 40;
		overtimepay = overtime * (rate / 2);
		pay = rate * (hours - overtime);
		g = pay + overtimepay;
	}
	else
		g = hours * rate;
	return g;
}
void display_employee(vector<employee>& employees)
{
	cout << fixed << setprecision(2);
	for (const auto& e : employees)
	{
		cout << e.fname << " " << e.lname << " hours: " << e.hours << " rate: " << e.rate << " Grosspay: " << e.grosspay << endl;
	}
}
int main()
{
	vector<employee> employees;
	employee x;

	cout << "Please enter employee first name, last name, hours and rate. (Press ctrl z to stop)" << endl;
	while (cin >> x.fname >> x.lname >> x.hours >> x.rate)
	{
		x.grosspay = comp_grosspay(x.hours, x.rate);

		employees.push_back(x);
	}
	cout << "Employee list: " << endl;
	display_employee(employees);
	return 0;
}
