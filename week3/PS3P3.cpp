#include<iostream>
using namespace std;
int main()
{
	//vairables
	float total;
	float tip;
	float totaltip;

	//input
	cout << "Please enter total meal price: $";
	cin >> total;

	//process
	tip = total * 0.15;
	totaltip = total + tip;
	cout << "Total for meal: $" << total << endl;
	cout << "Tip: $" << tip << endl;
	cout << "Total for meal and tip: $" << totaltip << endl;
	return 0;
}