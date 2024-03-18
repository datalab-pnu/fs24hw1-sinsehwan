#include "student.h"

Student::Student(int i, string n, string a, Date f, int c)
 : id(i), name(n), address(a), firstDate(f), completedCreditHours(c)
{}

Student& Student::operator=(const Student& rvalue)
{
	if(this != &rvalue)
	{
		id = rvalue.getID();
		name = rvalue.getName();
		address = rvalue.getAddress();
		firstDate.setDate(rvalue.getFirstDate().getDate());
		firstDate.setMonth(rvalue.getFirstDate().getMonth());
	}

	return *this;
}