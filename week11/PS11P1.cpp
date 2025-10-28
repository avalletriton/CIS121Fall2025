#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void comp_price(float MSRP, float price, float& tax, float& savings)
{
	float s;
	savings = MSRP - price;
	tax = price * 0.07;
}
int main()
{
	string make, model;
	float MSRP, price, savings, tax, sumsavings;
	ifstream infile;

	sumsavings = 0;

	infile.open("Auto.txt");

	while (!infile.eof())
	{
		infile >> make >> model >> MSRP >> price;

		comp_price(MSRP, price, tax, savings);

		sumsavings = sumsavings + savings;

		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "MSRP: " << MSRP << endl;
		cout << "Sales price: $" << price << endl;
		cout << "Savings: $" << savings << endl;
		cout << "Sales tax: $" << tax << endl;
	}
	cout << "Sum of savings: $" << sumsavings << endl;
	infile.close();
}