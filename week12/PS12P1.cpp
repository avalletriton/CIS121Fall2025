#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void load_arrays(string fname[], string lname[], float gpa[])
{
	int i;
	ifstream infile;

	infile.open("grade.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> fname[i] >> lname[i] >> gpa[i];
	}

	infile.close();
}
void print_arrays(string fname[], string lname[], float gpa[])
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
	}
}
void print_arrays_reverse(string fname[], string lname[], float gpa[])
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
	}
}
int main()
{
	string fname[10], lname[10];
	float gpa[10];

	load_arrays(fname, lname, gpa);

	print_arrays(fname, lname, gpa);

	print_arrays_reverse(fname, lname, gpa);

	return 0;
}