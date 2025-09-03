#include<iostream>
using namespace std;
int main()
{
//variables
	float score1;
	float score2;
	float totalscore;

//input
	cout << "Please enter first exam score: ";
	cin >> score1;
	cout << "Please enter second exam score: ";
	cin >> score2;
	
//process
	totalscore = (score1 * 0.6) + (score2 * 0.4);
	cout << "Total Score: " << totalscore;
	return 0;
}