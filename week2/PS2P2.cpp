#include<iostream>
using namespace std;
int main()
{
	//variables
	string LastName;
	float Hours;
	float PayRate;
	float GrossPay;

	//input
	cout << "Please enter your last name: ";
	cin >> LastName;
	cout << "Please enter hours: ";
	cin >> Hours;
	cout << "Please enter payrate: ";
	cin >> PayRate;

	//process
	GrossPay = Hours * PayRate;
	cout << "Name: " << LastName << endl;
	cout << "GrossPay: " << GrossPay;
	return 0;
}