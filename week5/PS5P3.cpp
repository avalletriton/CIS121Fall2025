#include<iostream>
using namespace std;
int main()
{
	 //variables
	string Lname;
	float hours;
	string code;
	float Prate;
	float total;

	//input
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter hours worked: ";
	cin >> hours;
	cout << "Please enter job code (E, J, A): ";
	cin >> code;

	//process
	if (code == "E")
		Prate = 25;
	else if (code == "J")
		Prate = 20;
	else if (code == "A")
		Prate = 15;

	total = Prate * hours;

	//output
	cout << "Last name: " << Lname << endl;
	cout << "Hours: " << hours << endl;
	cout << "Pay rate: $" << Prate << "/hour" << endl;
	cout << "Total: $" << total << endl;
	return 0;
}