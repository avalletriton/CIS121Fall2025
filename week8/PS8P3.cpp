#include<iostream>
#include<iomanip>
using namespace std;
float find_tuition(float credits)
{
	float tuition;

	tuition = credits * 250;

	return tuition;
}
int main()
{
	float Ttuition, Tstudents, credits, t;
	string lname;

	Ttuition = 0;
	Tstudents = 0;

	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Please number of enter credits taken (or ctrl z to stop): ";
	cin >> credits;

	while (!cin.eof())
	{
		t = find_tuition(credits);

		cout << "Student's last name: " << lname << endl;
		cout << "Number of credits taken: " << credits << endl;
		cout << "Tuition cost: $" << t << endl;

		Ttuition = Ttuition + t;
		Tstudents = Tstudents + 1;

		cout << "Please enter your last name: ";
		cin >> lname;
		cout << "Please number of enter credits taken (or ctrl z to stop): ";
		cin >> credits;
	}
	cout << "Total tuition: $" << Ttuition << endl;
	cout << "Total student entries: " << Tstudents << endl;
	return 0;
}