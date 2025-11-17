#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
struct student //Struct is a way of grouping variables
{
	string fname;
	string lname;
	string code;
	int credits;
	int tuition;
};
int comp_tuition(string code, int credits)
{
	int cost;

	if (code == "I")
		cost = 250;
	else
		cost = 500;
	return credits * cost;
}
void display_students(vector<student>& students)
{
	cout << fixed << setprecision(2);
	for (const auto& st : students) // auto is a typ of variable. In this line, auto& gets a reference of the original object in the vector. I also used const so the code doesnt overwrite vector data.
	{
		cout << st.fname << " " << st.lname << " District code: " << st.code << " Credits: " << st.credits << " Tuition: " << st.tuition << endl;
	}
}
int main()
{
	vector<student> students;
	student x;

	cout << "Please enter students first name, last name, district code (I or O) and credits. (Press ctrl z to stop)" << endl;
	while (cin >> x.fname >> x.lname >> x.code >> x.credits)
	{
		x.tuition = comp_tuition(x.code, x.credits);

		students.push_back(x);
	}
	cout << "Student list: " << endl;
	display_students(students);
	return 0;
}
//I struggled a bit on this problem so I took notes within the code