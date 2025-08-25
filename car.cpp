/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    car.cpp 
*/
#include <iostream>
 using namespace std;

 class Car {
private:
 string brand; 
 int year;
 public:

 void setInfo (string b, int y)
 {
    brand = b; year = y; 
 }
 void displayInfo() {
 cout << "Brand: " << brand << endl;
 cout << "Year: " << year << endl;
 }
 };

 int main() {
 Car car1;
car1.setInfo("Toyota", 2020);
 car1.displayInfo();

 return 0; 
}
/*
output testing: 
Brand: Toyota
Year: 2020
*/