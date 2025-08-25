/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    rectangle.cpp 
*/
#include <iostream>
using namespace std; 

class Rectangle{
    private:
        int width; 
        int height; 
    public: 
    //encapsulation via setter aligns well with OOP principles.
        void setInfor (int width, int height)
        {
            this -> width = width;
            this -> height = height; 
        }
    //the method of calculating area 
        int calculateArea(){
            return width * height; 
        }
};
int main(){
    Rectangle react1; 
    react1.setInfor(5, 10); 
    cout<<"Area: "<<react1.calculateArea()<<endl; 
    return 0;
}
/*
Testing output
Area: 50
*/