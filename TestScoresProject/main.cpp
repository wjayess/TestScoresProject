// William Smith, CISP 1020, Pointer Program, 02/21/2022
#include "main.h"

using namespace std;

int main()
{
	int amountofScores;
	// DAM pointer for array
	StudentData* currentStudents = nullptr;

	cout << "How many scores would you like to input? ";
	cin >> amountofScores;

	// dynamically allocate memory for StudentData
	currentStudents = new StudentData[amountofScores];

	delete[] currentStudents;
	currentStudents = nullptr;
}