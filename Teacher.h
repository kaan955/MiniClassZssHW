#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Teacher:Person {

private: 
	int numCourses = 0;
	string courses[100];

public:
	Teacher();
	Teacher(string, string);
	~Teacher();
	bool addCourse(string);
	bool removeCourse(string);

};