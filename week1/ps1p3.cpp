#include<iostream>
using namespace std;
int main()
{
	//variables
	string lname;
	float score;

	//input
	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your score: ";
	cin>> score;

	//output
	cout << lname << " has a score of " << score;
	return 0;
}