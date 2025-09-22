#include<iostream>
using namespace std;
int main()
{
	//variables
	float cost;
	string Ecode, Rcode;

	//input
	cout << "Please enter equipment code (A, B, C, D): ";
	cin >> Ecode;
	cout << "PLease enter the rental code (F, H): ";
	cin >> Rcode;

	//process
	if (Ecode == "A" && Rcode == "F")
		cost = 10;
	else if (Ecode == "A" && Rcode == "H")
		cost = 15;
	else if (Ecode == "B" && Rcode == "F")
		cost = 20;
	else if (Ecode == "B" && Rcode == "H")
		cost = 35;
	else if (Ecode == "C" && Rcode == "H")
		cost = 40;
	else if (Ecode == "C" && Rcode == "F")
		cost = 45;
	else
		cost = 50;

	//output
	cout << "Cost: $" << cost << endl;
	return 0;
}