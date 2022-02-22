#include "main.h"

void ascSort(std::string studentNames[], int studentScores[], int namesArraySize, int scoresArraySize)
{
	int temp;
	bool swap;
	do
	{
		swap = false;
		for (int count = 0; count < (namesArraySize - 1); count++)
		{
			if (toSort[count] > toSort[count + 1])
			{
				temp = toSort[count];
				toSort[count] = toSort[count + 1];
				toSort[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}