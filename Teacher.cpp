#include <iostream>
#include <string>
#include "Teacher.h"

Teacher::Teacher(string my_name, string my_address)
{
	name = my_name;
	address = my_address;

}

Teacher::Teacher()
{

	cout << "Default Constructor";
}
Teacher::~Teacher()
{
	cout << "Destructor";
}

bool Teacher::addCourse(string course)
{
	courses[numCourses] = course;
	numCourses++;

	return true;
}

bool Teacher::removeCourse(string course)
{
	if (numCourses == 0)
	{
		cout << "We dont have any course here";
		return false;
	}
	else
	{
		cout << "Course Deleted";
		numCourses--;
		return true;
		
	}

}