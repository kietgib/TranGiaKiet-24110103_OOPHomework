/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    circle.cpp 
*/
#include <iostream>
#include <cmath>
using namespace std; 

class Circle{
    private:
        double radius; 
        string color; 
    public: 
        Circle ()
        {

        }
        void setinFor(double radius, string color)
        {
            this -> radius = radius; 
            this -> color = color;
        }

        bool check (double radius)
        {
            return radius > 0; 
        }
        double circumference() {
            return 2 * M_PI * radius;
        }
         double area() {
            return M_PI * radius * radius;
        }
        void display ()
        {
            cout<<"Color: "<<color;
        }
};
int main(){
    
    cout<<"Nhap ban kinh hinh tron: ";
    double radius; 
    cin>>radius; 
    cin.ignore(256,'\n'); 
    string color; 
    getline(cin, color);
    Circle circle1;
    circle1.setinFor(radius, color); 
    if (circle1.check(radius))
    {
        cout<<"Chu vi hinh tron: "<<circle1.circumference()<<" don vi: "<<endl;
        cout<<"Dien tich hinh tron: "<<circle1.area()<<" don vi vuong"<<endl;
        circle1.display();
    }
    return 0;
}

/*
testing output:
Nhap ban kinh hinh tron:23
red
Chu vi hinh tron: 144.513 don vi 
Dien tich hinh tron: 1661.9 don vi vuong 
Color : red
*/