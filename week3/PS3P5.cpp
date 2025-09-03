#include<iostream>
using namespace std;
int main()
{
	//variables
	float Fcosts;
	float unitP;
	float unitC;
	float profit;
	float breakeven;


	//input
	cout << "Please enter the fixed costs of your business: $";
	cin >> Fcosts;
	cout << "Please enter the cost per unit: $";
	cin >> unitC;
	cout << "Please enter the price per unit: $";
	cin >> unitP;

	//process
	profit = unitP - unitC;
	breakeven = Fcosts / profit;
	cout << "Break even point: " << breakeven;
	return 0;
}