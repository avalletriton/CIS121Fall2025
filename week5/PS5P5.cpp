#include<iostream>
using namespace std;
int main()
{
	//variables 
	float weight;
	float rate;
	float total;

	//input
	cout << "Enter weight of metal scraps: ";
	cin >> weight;

	//process
	if (weight > 100)
		rate = .5;
	else if (weight >= 30)
		rate = .25;
	else if (weight >= 20)
		rate = .20;
	else
		rate = .10;

	total = rate * weight;

	//output
	cout << "Weight: " << weight << "lbs" << endl;
	cout << "Pay rate: " << rate << endl;
	cout << "Total: $" << total << endl;
	return 0;
}