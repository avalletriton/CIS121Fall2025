#include<iostream>
using namespace std;
int main()
{
	//variables
	string item;
	float quantity;
	float Uprice;
	float Eprice;

	//input
	cout << "Are you purchasing item A or B?" << endl;
	cout << "Enter Item: ";
	cin >> item;
	cout << "Enter the quantity of item: ";
	cin >> quantity;

	//process
	if (item == "a")
	{
		Uprice = 10;
	}
	if (item == "b")
	{
		Uprice = 20;
	}
	if (item == "A")
	{
		Uprice = 10;
	}
	if (item == "B")
	{
		Uprice = 20;
	}
	Eprice = Uprice * quantity;

	//output
	cout << "Item: " << item << endl;
	cout << "Unit price: $" << Uprice << endl;
	cout << "Extended Price: $" << Eprice << endl;
	return 0;
}