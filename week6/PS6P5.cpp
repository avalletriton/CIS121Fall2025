#include<iostream>
using namespace std;
int main()
{
	//variables
	string Jcode;
	float hours, rate, Gpay, Gsalary;

	//input
	cout << "Please enter in your job code (L, J, A): ";
	cin >> Jcode;
	cout << "Please enter your hours worked: ";
	cin >> hours;

	//process
	if (Jcode == "L" && hours > 40)
		rate = 50;
	else if (Jcode == "L" && hours <= 40)
		rate = 40;
	else if (Jcode == "J" && hours > 60)
		rate = 100;
	else if (Jcode == "J" && hours <= 60)
		rate = 75;
	else if (Jcode == "A" && hours > 40)
		rate = 25;
	else if (Jcode == "A" && hours <= 40)
		rate = 20;

	Gpay = hours * rate;

	//output
	cout << "Gross salary: $" << Gpay << endl;
	return 0;
}