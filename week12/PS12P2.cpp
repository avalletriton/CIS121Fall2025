#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void load_arrays(string city[], float population[]) //Loads the arrays
{
	int a; //Number of lines in the txt file
	cout << fixed << setprecision(0);

	ifstream infile;

	infile.open("population.txt");

	for (a = 0; a <= 7; a++)
	{
		infile >> city[a] >> population[a];
	}

	infile.close();
}
void print_arrays(string city[], float population[]) //Prints arrays
{
	int a;
	cout << fixed << setprecision(0);

	for (a = 0; a <= 7; a++)
	{
		cout << city[a] << " " << population[a] << endl;
	}
}
void search_arrays(string city[], float population[], string scity) // searches for a specific array
{
	int a;
	bool found; //was the value found?

	cout << fixed << setprecision(0);

	found = false;

	for (a = 0; a <= 7; a++)
	{
		if (scity == city[a])
		{
			cout << city[a] << " has a population of " << population[a] << endl;
			found = true;
		}
	}

	if (found == false)
		cout << scity << " was not found" << endl;
}
int main()
{
	string city[8], scity;
	float population[8];

	load_arrays(city, population);

	print_arrays(city, population);

	cout << "Please enter city name (or ctrl z to stop): ";
	cin >> scity;

	while (!cin.eof())
	{
		search_arrays(city, population, scity);

		cout << "Please enter city name (or ctrl z to stop): ";
		cin >> scity;
	}

	return 0;
}