#include <iostream>
#include <string>
using namespace std;

int main()
{
	int testScore;
	char grade;

	//Get the numeric value
	cout << "Enter your test score and I will\n";
	cout << "tell you what letter grade you earned: ";
	cin >> testScore;

	//Determine the letter grade
	if (testScore < 60)
		grade = 'F';
	else if (testScore < 70)
		grade = 'D';
	else if (testScore < 80)
		grade = 'C';
	else if (testScore < 90)
		grade = 'B';
	else if (testScore <= 100)
		grade = 'A';

	//Display the grades
	cout << "Your grade is " << grade << ".\n";
	
	return 0;
}