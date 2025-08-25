/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    employee.cpp 
*/
#include <iostream>
using namespace std; 

class Employee{
    private:
        string name; 
        double salary;
    public: 
    //encapsulation via setter aligns well with OOP principles.
        void setInfor (string name, double salary)
        {
            this -> name = name; 
            this -> salary = salary; 
        }
        //displayInfo cleanly outputs student info—functionality is solid
        void displayInfo(){
            cout<<"Name: "<<name<<endl; 
            cout<<"Salary: "<<salary<<endl; 
        }
};
int main(){
    Employee employee1; 
    employee1.setInfor("Alice", 50000);
    employee1.displayInfo(); 
    return 0;
}
/*testing output 
Name: Alice
Salary: 50000
*/