#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void load_arrays(string fname[], string lname[], float salary[])
{
	int i;
	ifstream infile;

	infile.open("empldata.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> fname[i] >> lname[i] >> salary[i];
	}
	infile.close();
}
void print_arrays(string fname[], string lname[], float salary[])
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
	}
}
void search_arrays(string fname[], string lname[], string slname, float salary[])
{
	int i;
	bool found;

	found = false;

	for (i = 0; i <= 9; i++)
	{
		if (slname == lname[i])
		{
			cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
			found = true;
		}
	}

	if (found == false)
	{
		cout << slname << " was not found" << endl;
	}
}
int main()
{
	string fname[10], lname[10], slname;
	float salary[10];

	load_arrays(fname, lname, salary);

	print_arrays(fname, lname, salary);

	cout << "Please enter last name (or ctrl to stop): ";
	cin >> slname;

	while (!cin.eof())
	{
		search_arrays(fname, lname, slname, salary);

		cout << "Please enter last name (or ctrl z to stop): ";
		cin >> slname;
	}

	return 0;
}