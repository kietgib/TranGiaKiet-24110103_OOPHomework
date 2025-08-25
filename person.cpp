/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    course.cpp 
*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age; 
    string address;
    string phonenumber;

public:
    Person() = default;
    //encapsulation via setter aligns well with OOP principles.
    void setInfo(string name, int age, string address, string phonenumber) {
        this -> name = name;
        this -> age = age; 
        this -> address = address;
        this -> phonenumber = phonenumber;
    }
    
    bool isAdult()
    {
        return age >= 18;
    }
    
    void address1(string address)
    {
        this -> address = address;
    }

    void greet() const {
        cout << "Hello, my name is " << name << "." << endl;
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phonenumber: " << phonenumber << endl;
    }
};

int main() {
    Person person1;
    person1.greet();
    person1.setInfo("John Doe", 20, "123 Main St", "0987654321"); 
    person1.displayInfo();

    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }   

    string address; 
    getline(cin, address); 
    person1.address1(address);
    person1.displayInfo();
    

    return 0;
}
/*
Testing output:
Hello, my name is .
Name: John Doe
Age: 20
Address: 123 Main St
Phonenumber: 0987654321
This person is an adult.
JohnWick
Name: John Doe
Age: 20
Address: JohnWick
Phonenumber: 0987654321
*/