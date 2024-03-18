#include <iostream>
#include <vector>
#include "student.h"
#include "courseRegistration.h"

using namespace std;

int main(void)
{
    // student data
    vector<Student> students;

    for(int i = 0; i < 15; i++)
    {
        string name = "student" + to_string(i);
        string address = "address" + to_string(i);
        Date date(i + 1, i + 5);
        int cchours = i + 10;
        Student s(i, name, address, date, cchours);
        students.push_back(s);
    }

    // course data
    vector<CourseRegistration> courses;

    for(int i = 0; i < 3; i++)
    {
        int cID = i + 100;
        int ch = (i % 4) + 1;
        CourseRegistration c(cID, ch);
        courses.push_back(c);
    }

    string grade[5] = {"A+", "A0", "B0", "C+", "F"};
    // register course
    for(int i = 0; i < students.size(); i++)
    {
        int ci = i % courses.size();
        courses[ci].addStudent(students[i]);
        courses[ci].setCourseGrade(students[i].getID(), grade[(i*3)%5]);

        courses[(ci + 1) % 3].addStudent(students[i]);
        courses[(ci + 1) % 3].setCourseGrade(students[i].getID(), grade[(i*2)%5]);
    }


    cout << "--------------------------------------\n";
    cout << "Student Data : \n";
    for(int i = 0; i < students.size(); i++)
    {

        cout << "ID : " << students[i].getID() << "\n";
        cout << "Name : " << students[i].getName() << "\n";
        cout << "Address : " << students[i].getAddress() << "\n";
        cout << "number of credit hours : " << students[i].getCch() << "\n";
    }

    cout << "--------------------------------------\n";
    cout << "course Data : \n";
    cout << "--------------------------------------\n";
    for(int i = 0; i < courses.size(); i++)
    {
        cout << "course " << i << "\n";
        cout << "course ID : " << courses[i].getCoutseID() << "\n";
        cout << "course Credit hours : " << courses[i].getCreditHours() << "\n";

        cout << "students : \n";
        
        vector<int> sIdList = courses[i].getStudentID();
        vector<string> sGradeList = courses[i].getCourseGrade();
        for(int k = 0; k < sIdList.size(); k++)
        {
            cout << "student ID : " << sIdList[k] << ", Grade : " << sGradeList[k] << "\n";
        }

            cout << "--------------------------------------\n";
    }

}

