#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void comp_biweekly(float salary, float& biweekly)
{
	biweekly = salary / 26;
}
int main()
{
	float salary, biweekly, sumsalary, count;
	string lname;
	fstream infile;

	sumsalary = 0;
	count = 0;

	infile.open("empl.txt");

	while (!infile.eof())
	{
		infile >> lname >> salary;

		comp_biweekly(salary, biweekly);
		sumsalary = sumsalary + salary;
		count = count + 1;

		cout << "Annual salary: $" << salary << endl;
		cout << "Biweekly salary: $" << biweekly << endl;
	}
	cout << "Sum of annual salary: $" << sumsalary << endl;
	cout << "Employee count: " << count << endl;
	infile.close()
}