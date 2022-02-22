#pragma once

#include <iostream>
#include <fstream>

struct StudentData
{
	std::string name = "";
	double grade = 0;
};

void ascSort(StudentData[], int);
double averageIntArray(int[], int);
void readFile();