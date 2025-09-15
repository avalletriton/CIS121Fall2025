#include<iostream>
using namespace std;
int main()
{
	// variables
	string Lname;
	float score;
	string grade;

	//input
	cout << "Please enter your last name: ";
	cin >> Lname;
	cout << "Please enter your score: ";
	cin >> score;

	//process
	if (score > 89)
		grade = "A";
	else if (score >= 80)
		grade = "B";
	else if (score >= 70)
		grade = "C";
	else if (score >= 60)
		grade = "D";
	else
		grade = "F";

	//output
	cout << "Last name: " << Lname << endl;
	cout << "Grade: " << grade << endl;
	return 0;
}