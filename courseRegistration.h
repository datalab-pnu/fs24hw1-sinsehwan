#ifndef CR
#define CR

#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

class CourseRegistration
{
    private:
        int courseID = 0;
        vector<int> studentID;
        int creditHours = 0;
        vector<string> courseGrade;
    public:
        CourseRegistration() = default;
        CourseRegistration(int cID, int c) : courseID(cID), creditHours(c) {}

        void setCourseID(int i){ courseID = i; }
        int getCoutseID(){ return courseID; }
        // register student
        void addStudent(Student s);
        vector<int> getStudentID() { return studentID; }

        void setCreditHours(int c) {creditHours = c;}
        int getCreditHours(){ return creditHours; }

        void setCourseGrade(int studentID, string grade);
        vector<string> getCourseGrade() { return courseGrade; }
};

#endif