// create a class - definition

#include<iostream>

#include<string>

using namespace std;

class Employee

{
public:

	// function header

	Employee();

	void FirstName(string fn);
	string FirstName();

	void LastName(string ln);
	string LastName();

	void Salary(float);
	float Salary();

	float Bonus();

	~Employee();



protected: // this could be private too

	string m_fn, m_ln;
	float m_salary;
	float m_bonus;
};

Employee::~Employee()

{

	cout << "Goodbye" << endl;

	system("pause");

}

Employee::Employee()

{

	// constructor method - runs when the object is instantiated

	m_salary = 0.00f;

}

void Employee::FirstName(string fn)
{
	// get data from the program and protect it

	m_fn = fn;
}

string Employee::FirstName()
{
	return m_fn;
}

void Employee::LastName(string ln)
{
	// get data from the program and protect it

	m_ln = ln;
}

string Employee::LastName()
{
	return m_ln;
}

void Employee::Salary(float s)
{
	m_salary = s;
}

float Employee::Salary()
{
	return m_salary;
}

float Employee::Bonus()
{
	if (m_salary > 100000.00)
		m_bonus = m_salary * 0.20f;
	else
		m_bonus = m_salary * 0.10f;

	return m_bonus;
}

class Manager : public Employee
{
public:
	float Long_Term_Bonus();    //This is the new method
	float Bonus();              //This is the override for the employee's bonus
};

float Manager::Long_Term_Bonus()
{
	return m_salary * 0.5f;
}

float Manager::Bonus()
{
	return m_salary * 0.5f;
}

int main()
{
	Manager manager;

	manager.FirstName("John");
	manager.LastName("Smith");
	manager.Salary(120000);

	cout << "First name: " << manager.FirstName() << endl;
	cout << "Last name: " << manager.LastName() << endl;
	cout << "Salary: $" << manager.Salary() << endl;
	cout << "Normal Bonus (The override): $" << manager.Bonus() << endl;
	cout << "Long Term Bonus: $" << manager.Long_Term_Bonus() << endl;

	return 0;
}