#include<iostream>
using namespace std;
int main()
{
	//variables
	float Length;
	float Width;
	float Area;
	float Circumference;

	//input
	cout << "Enter length: ";
	cin >> Length;
	cout << "Enter width: ";
	cin >> Width;

	//process
	Area = Length * Width;
	Circumference = (2 * Length) + (2 * Width);
	cout << "Area: " << Area << endl;
	cout << "Circumference: " << Circumference;
	return 0;
}