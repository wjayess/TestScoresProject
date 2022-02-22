// William Smith, CISP 1020, Pointer Program, 02/21/2022
#include "main.h"

using namespace std;

int main()
{
	int amountOfScores = 0;
	cout << "Enter the amount of scores there are: ";
	cin >> amountOfScores;

	StudentData* students = readFile(amountOfScores);

	displayData(students, amountOfScores);
	ascSort(students, amountOfScores);

	displaySortedData(students, amountOfScores);

	cout << "Average grade: " << averageStudentGrades(students, amountOfScores) << endl;

	delete[] students;
}