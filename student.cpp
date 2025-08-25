/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    student.cpp 
*/
#include <iostream>
using namespace std; 

class Student{
    private:
        string name; 
        double grade; 
    public: 
    //encapsulation via setter aligns well with OOP principles.
        void setInfor (string name, double grade)
        {
            this -> name = name; 
            this -> grade = grade; 
        }
    //displayInfo cleanly outputs student info—functionality is solid
        void displayInfo(){
            cout<<"Name: "<<name<<endl; 
            cout<<"Grade: "<<grade<<endl; 
        }
};
int main(){
    Student student1; 
    student1.setInfor("John", 8.5);
    student1.displayInfo(); 
    return 0;
}

/*
Testing 
Name: John
Grade: 8.5
*/