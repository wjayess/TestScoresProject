void ascSortInt(int toSort[], int arraySize)
{
	int temp;
	bool swap;
	do
	{
		swap = false;
		for (int count = 0; count < (arraySize - 1); count++)
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