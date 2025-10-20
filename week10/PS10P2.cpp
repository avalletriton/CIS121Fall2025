#include<iostream>
#include<iomanip>
using namespace std;
void find_costs(float weight, string code, float& postage, float& area_charge, float& weight_charge)
{
	if (code == "60171")
		area_charge = 2;
	else if (code == "60172")
		area_charge = 2.5;
	else if (code == "60635")
		area_charge = 3;
	else
		area_charge = 5;

	float ounce;

	if (weight > 100)
		ounce = .02;
	else if (weight > 50)
		ounce = .03;
	else
		ounce = .05;

	weight_charge = weight * ounce;
	postage = weight_charge + area_charge;
}
int main()
{
	float weight, postage, area_charge, weight_charge, entries = 0;
	string code;

	cout << "Please enter weight: ";
	cin >> weight;
	cout << "Please enter zip code (60171, 60172, 60635, other)(or press ctrl z to stop): ";
	cin >> code;

	while (!cin.eof())
	{
		find_costs(weight, code, postage, area_charge, weight_charge);

		cout << "Weight charge: $" << weight_charge << endl;
		cout << "Area charge: $" << area_charge << endl;
		cout << "Postage: $" << postage << endl;

		entries = entries + 1;

		cout << "Please enter weight: ";
		cin >> weight;
		cout << "Please enter zip code (60171, 60172, 60635, other)(or press ctrl z to stop): ";
		cin >> code;
	}
	cout << "Total entries made: " << entries << endl;
	return 0;
}