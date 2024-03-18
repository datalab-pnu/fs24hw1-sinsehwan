#include "courseRegistration.h"

void CourseRegistration::addStudent(Student s)
{
    studentID.push_back(s.getID());
    courseGrade.push_back("F");
}

void CourseRegistration::setCourseGrade(int sID, string grade)
{
    int index = 0;
    for(index = 0; index < studentID.size(); index++)
    {
        if(studentID[index] == sID)
            break;
    }
    courseGrade[index] = grade;
}
