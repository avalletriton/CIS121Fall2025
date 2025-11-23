#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
class member 
{
private:
	string fname;
	string lname;
	float age;
	string status;
	int cost;

public:
	member()
	{ //The following are the default settings
		fname = "not entered";
		lname = "not entered";
		age = 18;
		status = "Bronze";
		cost = 500;
	}

	void setfname(string f) //The void lines are for setting the data within each member/object
	{
		fname = f;
	}
	void setlname(string l)
	{
		lname = l;
	}
	void setage(float a)
	{
		age = a;
	}
	void setstatus(string st)
	{
		if (st == "Gold")
			status = "Gold";
		else if (st == "Silver")
			status = "Silver";
		else
			status = "Bronze";
	}

	void calccost()
	{
		if (status == "Gold")
			cost = 1200;
		else if (status == "Silver")
			cost = 1000;
		else
			cost = 500;

		if (age > 50)
		{
			cost = cost * .9;
		}
	}

	void displaydata()
	{
		cout << "Member's First name: " << fname << endl;
		cout << "Member's Last name: " << lname << endl;
		cout << "Age: " << age << endl;
		cout << "Membership status: " << status << endl;
		cout << "Costs: $" << cost << endl;
	}
};
int main()
{
	member member;
	string fname, lname, status;
	float age;

	cout << "Please enter membership info (or press ctrl z to stop):" << endl;

	while (!cin.eof())
	{
		cout << "Enter first name: ";
		cin >> fname;
		cout << "Enter last name: ";
		cin >> lname;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter membership status (Gold, Silver, Bronze): ";
		cin >> status;

		//The next lines are for setting the data in the object
		member.setfname(fname);
		member.setlname(lname);
		member.setage(age);
		member.setstatus(status);
		member.calccost();


		member.displaydata();
	}
	return 0;
}