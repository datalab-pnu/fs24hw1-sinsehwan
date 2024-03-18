#ifndef STD
#define STD

#include <iostream>
#include <string>

using namespace std;

class Date
{
	private:
		int month = 0;
		int date = 0;
	public:
		Date() = default;
		Date(int m, int d) : month(m), date(d) {}

		void setMonth(int m){ month = m; }
		int getMonth(){ return month; }
		void setDate(int d){ date = d; }
		int getDate(){ return date; }
};

class Student
{
	private:
		int id = 0;
		string name = "";
		string address = "";
		Date firstDate;
		int completedCreditHours = 0;
	public:
		Student() = default;
		Student(int i, string n, string a, Date f, int c);

		void setID(int i) { id  = i; }
		int getID() { return id; }
		int getID() const { return id; }
		void setName(string n){ name = n; }
		string getName() { return name; }
		string getName() const { return name; }
		void setAddress(string a){ address = a; }
		string getAddress(){ return address; }
		string getAddress() const { return address; }
		void setFirstDate(int month, int date){ 
			firstDate.setMonth(month);
			firstDate.setDate(date);
		}
		Date getFirstDate() { return firstDate; }
		Date getFirstDate() const { return firstDate; }

		void setCch(int c) {completedCreditHours = c;}
		int getCch() { return completedCreditHours; }

		Student& operator=(const Student& rvalue);
};

#endif