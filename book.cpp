/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    book.cpp 
*/
#include <iostream>
using namespace std; 

class Book{
    private:
        string title; 
        string author; 
    public: 
        void setInfor (string title , string author)
        {
            this -> title = title; 
            this -> author = author; 
        }

        void displayInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        }
};
int main(){
    Book book1; 
    book1.setInfor("C++ Programming", "Bjarne Stroustrup");
    book1.displayInfo(); 
    return 0;
}
/* 
output testing 
Title: C++ Programming
Author: Bjarne Stroustrup
*/