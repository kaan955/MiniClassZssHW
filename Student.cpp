#include <iostream>
#include <string>
#include "Student.h"

Student::Student(string my_name, string my_address)
{
	name = my_name;
	address = my_address;

}

Student::Student()
{
	cout << "Default Constructor";

}
Student::~Student()
{
	cout << "Destructor";
}

string Student::toString()
{
	return name; // sorry, but i didnt get what should this function do.
}

void Student::addCourseGrade(string my_course,int my_grade)
{
	courses[numCourses] = my_course;
	grades[numCourses] = my_grade;
	numCourses++;
}

void Student::printGrades()
{
	for (int i = 0; i < numCourses; i++)
	{
		cout << grades[i] << endl;
	}
}

double Student::getAverageGrade()
{
	double average = 0;
	for (int i = 0; i < numCourses; i++)
	{
		average += grades[i];
	}

	return average/numCourses;
	

}


