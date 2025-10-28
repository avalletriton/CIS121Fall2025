#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void calc_tuition(string code, float credits, float& tuition, float& fees, float& cost)
{
	if (code == "I")
		cost = 250;
	else if (code == "O")
		cost = 500;

	tuition = credits * cost;
	fees = tuition * 0.1f;
}
int main()
{
	float count, credits, tuition, fees, cost, sumtuition, totaltuition, average_tuition;
	string code, lname;
	fstream infile;

	count = 0;
	sumtuition = 0;

	infile.open("student.txt");

	while (!infile.eof())
	{
		infile >> lname >> code >> credits;

		calc_tuition(code, credits, tuition, fees, cost);

		totaltuition = tuition + fees;
		count = count + 1;
		sumtuition = sumtuition + tuition;

		cout << "Last name: " << lname << endl;
		cout << "Student code: " << code << endl;
		cout << "Cost per credit hour: $" << cost << endl;
		cout << "Credits taken: " << credits << endl;
		cout << "Tuition owed: $" << tuition << endl;
		cout << "Course fees: $" << fees << endl;
		cout << "Total tuition cost: $" << totaltuition << endl;
	}
	cout << "Sum of tuition: $" << sumtuition << endl;
	cout << "Student count: " << count << endl;
	average_tuition = sumtuition / count;
	cout << "Average tuition: $" << average_tuition << endl;
	infile.close();
}