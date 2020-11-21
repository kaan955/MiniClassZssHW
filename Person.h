#pragma once

#include <string>
using namespace std;

class Person
{

public:
	Person(string, string);
	Person();
	string getName();
	string getAddress();
	void setAddress(string);
	~Person();


protected:
	string name,address;
};


