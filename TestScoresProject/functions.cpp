#include "main.h"

using namespace std;

// quality of life. testing if something is a number or not
bool isNumber(string string)
{
	for (int i = 0; i < string.length(); i++)
		if (isdigit(string[i]) == false)
			return false;

	return true;
}

// process/read data from file
StudentData * readFile(int size)
{
	string readPos;
	int count = 0;

	StudentData* students = nullptr;
	students = new StudentData[size];

	ifstream inputFile;
	inputFile.open("D:\\CPPProjects\\TestScoresProject\\TestScoresProject\\StudentData.txt");

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

	return students;
}

// sort an array of the StudentData struct in ascending order by the grade member variable
void ascSort(StudentData students[], int size)
{
	StudentData temp;
	bool swap = true;
	do
	{
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

// get the average of an int array
double averageStudentGrades(StudentData students[], int size)
{
	double sum = 0;
	for (int count = 0; count < size; count++)
	{
		sum += students[count].grade;
	}

	return sum / size;
}

void displayData(StudentData students[], int size)
{
	cout << "Student Scores (unsorted):\n";
	for (int count = 0; count < size; count++)
	{
		cout << students[count].name << ": " << students[count].grade << endl;
	}
}

void displaySortedData(StudentData students[], int size)
{
	cout << "Student Scores (sorted):\n";
	for (int count = 0; count < size; count++)
	{
		cout << students[count].name << ": " << students[count].grade << endl;
	}
}