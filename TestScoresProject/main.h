#pragma once

#include <iostream>
#include <fstream>

// Making that juicy structure
struct StudentData
{
	std::string name = "";
	double grade = 0;
};

// Function prototypes
StudentData * readFile(int);
void ascSort(StudentData[], int);
double averageStudentGrades(StudentData[], int);
void displayData(StudentData[], int);
void displaySortedData(StudentData[], int);