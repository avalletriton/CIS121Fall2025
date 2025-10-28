#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void calc_mpg(float miles, float gallons, float& mpg)
{
	mpg = miles / gallons;
}
int main()
{
	float miles, gallons, mpg, sumgallons, summiles;
	fstream infile;

	sumgallons = 0;
	summiles = 0;

	infile.open("Trips.txt");

	while (!infile.eof())
	{
		infile >> gallons >> miles;

		calc_mpg(miles, gallons, mpg);

		sumgallons = sumgallons + gallons;
		summiles = summiles + miles;
		
		cout << "Gallons used: " << gallons << endl;
		cout << "Miles traveled: " << miles << endl;
		cout << "Miles per gallon: " << mpg << endl;
	}
	cout << "Sum of gallons used: " << sumgallons << endl;
	cout << "Sum of miles traveled: " << summiles << endl;
	infile.close();
}