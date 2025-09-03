#include<iostream>
using namespace std;
int main()
{
	 //variables
	float Pprice;
	float Cprice;
	float difference;
	float percentage;

	//input
	cout << "Please enter purchase price: $";
	cin >> Pprice;
	cout << "Please enter current price: $";
	cin >> Cprice;

	//process
	difference = Cprice - Pprice;
	percentage = (Pprice / difference) * 100;
	cout << "Percentage differnece: " << percentage << "%";
	return  0;
}