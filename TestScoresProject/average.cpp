double averageIntArray(int toAvg[], int arraySize)
{
	double sum = 0;
	for (int i = 0; i < arraySize; i++)
	{
		sum += toAvg[i];
	}

	return sum / arraySize;
}