#include "main.h"

using namespace std;

// QoL function to check if a string is a number.
bool isNumber(string string)
{
	// Loop through the string, and check if something is a digit or not.
	for (int i = 0; i < string.length(); i++)
		if (isdigit(string[i]) == false)
			return false;

	return true;
}

// Return the student data that is retrieved from the file.
StudentData * readFile(int size)
{
	// MAKE SURE TO DELETE LATER!!!
	// Have to DA an array so we can change it during runtime.
	StudentData* students = nullptr;
	students = new StudentData[size];

	ifstream inputFile;
	inputFile.open("D:\\CPPProjects\\TestScoresProject\\TestScoresProject\\StudentData.txt");
	string readPos;

	// Had so much trouble on this for some reason. All in one iteration, check whether the read position
	// contains "letters" or "numbers". If it contains letters, it's obviously the student's name,
	// so store that read position within the students object's name variable, and vice versa
	// for the student object's grade variable.
	for (int count = 0; count < size; count++)
	{
		inputFile >> readPos;
		if (!isNumber(readPos))
			students[count].name = readPos;
		else
			students[count].grade = atoi(readPos.c_str());

		inputFile >> readPos;
		if (!isNumber(readPos))
			students[count].name = readPos;
		else
			students[count].grade = atoi(readPos.c_str());
	}

	inputFile.close();

	// Returning a DA array, so... again... REMEMBER TO DELETE!!!
	return students;
}

// Sort the inputted StudentData array by the grade member variable.
void ascSort(StudentData students[], int size)
{
	StudentData temp;
	bool swap = true;
	do
	{
		// bubble sort ftw!!
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (students[count].grade > students[count + 1].grade)
			{
				temp = students[count];
				students[count] = students[count + 1];
				students[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

// Get the average of the grade member variable of the passed in StudentData array.
double averageStudentGrades(StudentData students[], int size)
{
	double sum = 0;
	for (int count = 0; count < size; count++)
	{
		sum += students[count].grade;
	}

	return sum / size;
}

// Just display data. Simple
void displayData(StudentData students[], int size)
{
	cout << "Student Scores (unsorted):\n";
	for (int count = 0; count < size; count++)
	{
		cout << students[count].name << ": " << students[count].grade << endl;
	}
}

// Literally the same as above. Since bubble sort changes the array itself, it just displays an updated version of displayData().
void displaySortedData(StudentData students[], int size)
{
	cout << "Student Scores (sorted):\n";
	for (int count = 0; count < size; count++)
	{
		cout << students[count].name << ": " << students[count].grade << endl;
	}
}