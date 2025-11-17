#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
struct car
{
	string make;
	string model;
};
void display_array(vector<car>& cars)
{
	for (const auto& t : cars)
	{
		cout << "Make: " << t.make << " Model: " << t.model << endl;
	}
}
int main()
{
	int n, r, i;
	vector<car> cars;
	car x;

	cout << "Please enter number of cars: ";
	cin >> n;
	r = n - 1;
	cout << "Please enter the make and model of each car: " << endl;
	for (i = 0; i <= r; i++)
	{
		cin >> x.make >> x.model;

		cars.push_back(x);
	}
	cout << "Car list:" << endl;
	display_array(cars);
	return 0;
}