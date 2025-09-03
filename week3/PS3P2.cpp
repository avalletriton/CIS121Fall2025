#include<iostream>
using namespace std;
int main()
{
//variables
	float stockprice;
	float quantity;
	float currentvalue;

	//input
	cout << "Please enter the stock price: ";
	cin >> stockprice;
	cout << "Please enter the quantity: ";
	cin >> quantity;

	//process
	currentvalue = stockprice * quantity;
	cout << "Current value: " << currentvalue;
	return 0;
}