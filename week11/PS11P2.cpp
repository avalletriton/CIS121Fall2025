#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void find_price(float quantity, float price, float& Eprice)
{
	Eprice = quantity * price;
}
int main()
{
	float quantity, price, Eprice, tax, total, sumEprice;
	string item;
	ifstream infile;

	sumEprice = 0;

	infile.open("Grocery.txt");

	while (!infile.eof())
	{
		infile >> item >> quantity >> price;

		find_price(quantity, price, Eprice);

		sumEprice = sumEprice + Eprice;

		cout << "Item: " << item << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Cost per item: $" << price << endl;
		cout << "Extended price: $" << Eprice << endl;
	}
	tax = sumEprice * 0.07f;
	total = sumEprice + tax;
	cout << "Sum of extended price: $" << sumEprice << endl;
	infile.close();
}