#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Student:Person
{
private:
	int numCourses = 0;
	string courses[100];
	int grades[100];

public:
	Student(string, string);
	Student();
	~Student();

	string toString();
	void addCourseGrade(string, int);
	void printGrades();
	double getAverageGrade();
}; 