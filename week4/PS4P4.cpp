#include<iostream>
using namespace std;
int main()
{
	//variables
	string appliance;
	float Acost;
	float Wcost;
	float total;

	//input
	cout << "Please enter appliance name: ";
	cin >> appliance;
	cout << "Please enter appliance cost: $";
	cin >> Acost;

	//process
	if (Acost > 1000)
	{
		Wcost = Acost * 0.1;
	}
	if (Acost <= 1000)
	{
		Wcost = Acost * 0.05;
	}
	total = Acost + Wcost;

	//output
	cout << "Appliance: " << appliance << endl;
	cout << "Cost: $" << Acost << endl;
	cout << "Warantee Cost: $" << Wcost << endl;
	cout << "Total: $" << total << endl;
	return 0;
}