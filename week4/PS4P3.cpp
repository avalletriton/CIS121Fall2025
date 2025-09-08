#include<iostream>
using namespace std;
int main()
{
	//variables
	float quantity;
	float cost;
	float total;
	float Scharge;

	//input
	cout << "Enter the qunatity of books: ";
	cin >> quantity;
	cout << "Enter the cost per book: $";
	cin >> cost;

	//process
	total = quantity * cost;
	if (total < 50)
	{
		Scharge = 25;
	}
	else
	{
		Scharge = 0;
	}

	//output
	cout << "Total: $" << total << endl;
	cout << "Shipping cost: $" << Scharge << endl;
	return 0;
}