#include "main.h"

using namespace std;

// quality of life. testing if something is a number or not
bool isNumber(string stringToTest)
{
	for (int i = 0; i < stringToTest.length(); i++)
		if (isdigit(stringToTest[i]) == false)
			return false;

	return true;
}

// sort an array of the StudentData struct in ascending order by the grade member variable
void ascSort(StudentData students[], int scoresArraySize)
{
	StudentData temp;
	bool swap = true;
	do
	{
		swap = false;
		for (int count = 0; count < (scoresArraySize - 1); count++)
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
double averageIntArray(int toAvg[], int arraySize)
{
	double sum = 0;
	for (int i = 0; i < arraySize; i++)
	{
		sum += toAvg[i];
	}

	return sum / arraySize;
}

// process/read data from file
void readFile()
{
	int amountOfScores = 0;
	string readPos;
	ifstream inputFile;
	inputFile.open("D:\\CPPProjects\\TestScoresProject\\TestScoresProject\\StudentData.txt");
	while (!inputFile.eof())
	{
		inputFile >> readPos;

		// if we're reading data in the file that isn't a number, it's obviously the student's name. that means that's another student to account for.
		if (!isNumber(readPos))
		{
			amountOfScores++;
		}
	}

	StudentData* students = nullptr;
	students = new StudentData[amountOfScores];

	for ()

	inputFile.close();
	delete[] students;
	students = nullptr;
}