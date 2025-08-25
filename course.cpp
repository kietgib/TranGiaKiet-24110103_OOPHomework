/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    course.cpp 
*/
#include <iostream>
#include <cmath>
using namespace std; 

class Course{
    private:
        string courseName;
        string courseCode;
        int credits;

    public: 
        Course ()
        {
        }
        void setinFor(string courseName,string courseCode, int credits)
        {
            this -> courseName = courseName; 
            this -> courseCode = courseCode; 
            this -> credits = credits;

        }

        void displayInfo() {
            cout << "Course Name: " << courseName << endl;
            cout << "Course Code: " << courseCode << endl;
             cout << "Credits: " << credits << endl;
        }

        bool isHighCredit() {
        return credits > 3;
         }

};
int main(){
    Course course1; 
    course1.setinFor("Object Oriented Programming", "CS202", 4);
    course1.displayInfo();

    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }

    return 0;
}
/*
testing output
Course Name: Object Oriented Programming
Course Code: CS202
Credits: 4
This is a high credit course.
*/