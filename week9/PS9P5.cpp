#include<iostream>
#include<iomanip>
using namespace std;
float find_tuition(float cost, float hours)
{
	float t;
	t = cost * hours;
	return t;
}
float cost_credit(string code)
{
	float c;
	if (code == "I")
		c = 250;
	else if (code == "O")
		c = 550;
	return c;
}
int main()
{
	float sumtuition, tuition, cost, hours;
	string lname, code;

	sumtuition = 0;
	cout << "Please enter last name: ";
	cin >> lname;
	cout << "Please enter district code (I, O): ";
	cin >> code;
	cout << "PLease enter credit hours (or press ctrl z to stop): ";
	cin >> hours;

	while (!cin.eof())
	{
		cost = cost_credit(code);
		tuition = find_tuition(cost, hours);
		sumtuition = sumtuition + tuition;
		cout << "Last name: " << lname << endl;
		cout << "Tuition cost: $" << tuition << endl;

		cout << "Please enter last name: ";
		cin >> lname;
		cout << "Please enter district code (I, O): ";
		cin >> code;
		cout << "PLease enter credit hours (or press ctrl z to stop): ";
		cin >> hours;
	}
	cout << "Sum of all tuition: $" << sumtuition << endl;
	return 0;
}