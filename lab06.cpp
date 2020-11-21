#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{

	//Person's part
	Person person("Zeynep","Fatih");
	cout<<person.getAddress();
	cout<<person.getName();

	person.setAddress("Capa");  //Changed address
	cout << person.getAddress(); //Capa now

	//Student's part
	Student student("ogrenci", "Merter");
	cout << student.toString();
	student.addCourseGrade("Programlama",100);
	student.addCourseGrade("Programlama2", 80);

	student.printGrades(); // 100 80
	cout<<student.getAverageGrade(); //  will give 90.   (100+80)/2

	//Teacher's part
	bool Myaddcourse=false, Myremovecourse=false;
	Teacher teacher("ogretmen", "Atakoy");
	Myaddcourse = teacher.addCourse("Matematik"); // true
	Myremovecourse = teacher.removeCourse("Matematik"); // it will return true
	Myremovecourse = teacher.removeCourse("deneme"); // it will return false , there is no class

	
	









	return 0;
}