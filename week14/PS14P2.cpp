#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
class computer
{
private:
	string make;
	string model;
	string cpu;
	string ram;
	string hard_drive;
	string type;
	int cost;

public:
	computer()
	{
		make = "Lenovo";
		model = "LE100A";
		cpu = "Intel";
		ram = "32GB";
		hard_drive = "HD";
		type = "Laptop";
		cost = 0;
	}

	void setmake(string ma)
	{
		make = ma;
	}
	void setmodel(string mo)
	{
		model = mo;
	}
	void setcpu(string c)
	{
		cpu = c;
	}
	void setram(string r)
	{
		ram = r;
	}
	void setharddrive(string hd)
	{
		hard_drive = hd;
	}
	void settype(string t)
	{
		type = t;
	}
	void calccost()
	{
		if (make == "Lenovo")
			cost = cost + 1200;
		else if (make == "HP")
			cost = cost + 1000;
		else if (make == "Apple")
			cost = cost + 2000;

		if (model == "Intel")
			cost = cost + 200;

		if (ram == "16GB")
			cost = cost + 300;
		else if (ram == "32GB")
			cost = cost + 500;

		if (hard_drive == "SSD")
			cost = cost + 500;

		if (type == "Laptop")
			cost = cost + 300;
		else if (type == "Tablet")
			cost = cost - 200;
	}
	void displaycost()
	{
		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "CPU: " << cpu << endl;
		cout << "RAM: " << ram << endl;
		cout << "Hard drive: " << hard_drive << endl;
		cout << "Computer type: " << type << endl;
		cout << "Total cost: $" << cost << endl;
	}
};
int main()
{
	computer PC;
	string make, model, cpu, ram, hard_drive, type;
	int cost;

	cout << "Please enter the attributes for your device: " << endl;

	while (!cin.eof())
	{
		cout << "Enter make of your device (Lenovo, HP, Apple): ";
		cin >> make;
		cout << "Enter model of your device: ";
		cin >> model;
		cout << "Enter the cpu of your device (Intel or AMD): ";
		cin >> cpu;
		cout << "Enter the ram of your device (8GB, 16GB, 32GB): ";
		cin >> ram;
		cout << "Enter hard drive of your device (SSD, HD): ";
		cin >> hard_drive;
		cout << "Enter computer type (Laptop, Notebook, Tabler, Desktop): ";
		cin >> type;

		PC.setmake(make);
		PC.setmodel(model);
		PC.setcpu(cpu);
		PC.setram(ram);
		PC.setharddrive(hard_drive);
		PC.settype(type);
		PC.calccost();

		PC.displaycost();
	}
	return 0;
}