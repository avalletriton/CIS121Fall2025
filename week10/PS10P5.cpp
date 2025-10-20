#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void comp_invest(float investment, float rate5, float rate10, float& amount5, float& amount10)
{
	float base1, base2;

	base1 = 1 + rate5;
	base2 = 1 + rate10;

	amount5 = investment * pow(base1, 5);
	amount10 = investment * pow(base2, 10);
}
int main()
{
	float investment, rate5, rate10, amount5, amount10;

	cout << "Please enter investment amount: ";
	cin >> investment;
	cout << "Please enter 5 year rate in decimal form: ";
	cin >> rate5;
	cout << "Please enter 10 year rate in deccimal form (or press ctrl z to stop): ";
	cin >> rate10;
	
	while (!cin.eof())
	{
		comp_invest(investment, rate5, rate10, amount5, amount10);

		cout << "Amount invested: " << investment << endl;
		cout << "Amount after 5 year rate: " << amount5 << endl;
		cout << "Amount after 10 year rate: " << amount10 << endl;

		cout << "Please enter investment amount: ";
		cin >> investment;
		cout << "Please enter 5 year rate in decimal form: ";
		cin >> rate5;
		cout << "Please enter 10 year rate in deccimal form (or press ctrl z to stop): ";
		cin >> rate10;
	}
	return 0;
}