// William Smith, CISP 1020, Pointer Program, 02/21/2022
#include "main.h"

using namespace std;

int main()
{
	//int amountofScores;
	//// DAM pointer for array
	//StudentData* currentStudents = nullptr;

	//cout << "How many scores would you like to input? ";
	//cin >> amountofScores;

	//// dynamically allocate memory for StudentData
	//currentStudents = new StudentData[amountofScores];

	//for (int count = 0; count < amountofScores; count++)
	//{
	//	cout << "Student #" << count + 1 << "'s name: ";
	//	cin >> currentStudents[count].name;
	//	cout << "Enter " << currentStudents[count].name << "'s test score: ";
	//	cin >> currentStudents[count].grade;
	//}

	//ascSort(currentStudents, amountofScores);

	//cout << "\nStudent Data: " << endl;

	//for (int count = 0; count < amountofScores; count++)
	//{
	//	cout << currentStudents[count].name << ": " << currentStudents[count].grade << endl;
	//}

	//delete[] currentStudents;
	//currentStudents = nullptr;

	readFile();
}