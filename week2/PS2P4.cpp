#include<iostream>
using namespace std;
int main()
{
	//variables
	string LastName;
	float Credits;
	float Tuition;


	//input
	cout << "Enter last name: ";
	cin >> LastName;
	cout << "Enter credits taken: ";
	cin >> Credits;

	//process
	Tuition = (Credits * 250) + 100;
	cout << "Last name: " << LastName << endl;
	cout << "Tuition: $" << Tuition;
	return 0;
}