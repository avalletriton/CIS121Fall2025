#include<iostream>
using namespace std;
int main()
{
	//variables
	string Lname;
	float dependents;
	float Gincome;
	float AGincome;
	float Itax;
	float Rtax;

	//input
	cout << "Please enter your last name: ";
	cin >> Lname;
	cout << "Please enter your gross income: $";
	cin >> Gincome;
	cout << "Please enter the number of dependents you have: ";
	cin >> dependents;

	//process
	AGincome = Gincome - (dependents * 12000);
	if (AGincome > 50000)
	{
		Rtax = AGincome * 0.2;
	}
	if (AGincome <= 50000)
	{
		Rtax = AGincome * 0.1;
	}
	Itax = AGincome * Rtax;
	if (Itax < 0)
	{
		Itax = 100;
	}

	//output
	cout << "Last name: " << Lname << endl;
	cout << "Gross income: $" << Gincome << endl;
	cout << "Number of dependents: " << dependents << endl;
	cout << "Adjusted Gross income: $" << AGincome << endl;
	cout << "Income tax : $" << Itax << endl;
	return 0;
}