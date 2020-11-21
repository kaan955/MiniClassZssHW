#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string my_name, string my_address)
{
	name = my_name;
	address = my_address;

}
Person::Person()
{
	cout << "Default Constructor";
}
string Person::getAddress()
{
	return address;

}
string Person::getName()
{
	return name;

}
void Person::setAddress(string my_newadd)
{
	address = my_newadd;
}

Person::~Person()
{

	cout << "Destructor";

}



