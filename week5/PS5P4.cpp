#include<iostream>
using namespace std;
int main()
{
	//variables
	float salary;
	float Trate;
	float amount;

	//input
	cout << "Please enter salary: $";
	cin >> salary;

	//process
	if (salary > 100000)
		Trate = .4;
	else if (salary >= 50000)
		Trate = .35;
	else
		Trate = .25;

	amount = salary * Trate;

	//output
	cout << "Salary: $" << salary << endl;
	cout << "Tax rate: " << Trate << endl;
	cout << "Tax amount: $" << amount << endl;
	return 0;
}