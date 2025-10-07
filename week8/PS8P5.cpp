#include<iostream>
#include<iomanip>
using namespace std;
float find_fee(float code, string department)
{
	float f;
	if (department == "CIS" && code == 101)
		f = 50;
	else if (department == "CIS" && code == 121)
		f = 100;
	else if (department == "MAT" && code == 111)
		f = 25;
	else if (department == "MAT" && code == 112)
		f = 35;
	else if (department == "ENG" && code == 100)
		f = 55;
	else
		f = 50;
	return f;
}
int main()
{
	float feecount, Tfee, averagefee, code, fee;
	string department;

	feecount = 0;
	Tfee = 0;

	cout << "Please enter the department (CIS, MAT, ENG, other): ";
	cin >> department;
	cout << "Please enter course code (101, 121, 111, 112, 100, other)(or enter crtl z to stop): ";
	cin >> code;

	while (!cin.eof())
	{
		fee = find_fee(code, department);

		feecount = feecount + 1;
		Tfee = Tfee + fee;
		averagefee = Tfee / feecount;

		cout << "Department: " << department << endl;
		cout << "Course code: " << code << endl;
		cout << "Lab fee: $" << fee << endl;

		cout << "Please enter the department (CIS, MAT, ENG, other): ";
		cin >> department;
		cout << "Please enter course code (101, 121, 111, 112, 100, other)(or enter crtl z to stop): ";
		cin >> code;
	}
	cout << "Avereage fee: $" << averagefee << endl;
	cout << "Total fees: " << feecount << endl;
	return 0;
}