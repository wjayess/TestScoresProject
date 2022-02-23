// William Smith, CISP 1020, Pointer Program, 02/21/2022

// This program grabs data from a text file in a format such as "name:grade per student, every line".
// After reading the data, the program will display the unsorted data, sort the students by grades, average the grades, and display the
// sorted students and their grades, as well as the average grade.

#include "main.h"

using namespace std;

int main()
{
	// Enter the amount of scores in main, so we can pass this value to each function.
	int amountOfScores = 0;
	cout << "Enter the amount of scores there are: ";
	cin >> amountOfScores;

	// Create a pointer variable pointing to the array (or pointer) of students that is returned by the readFile function.
	// This returns a dynamically allocated array though, so I need to remember to delete this later.
	StudentData* students = readFile(amountOfScores);

	// Just run functions
	displayData(students, amountOfScores);
	ascSort(students, amountOfScores);
	displaySortedData(students, amountOfScores);

	// Calculate and display the average grade of all students.
	cout << "Average grade: " << averageStudentGrades(students, amountOfScores) << endl;

	// no memory leaks here ;)
	delete[] students;
}