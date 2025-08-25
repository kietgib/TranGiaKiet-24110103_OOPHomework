/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    Description: 
    A C++ program to manage Laptop objects using OOP principles.
    This version includes improved constructors, methods, and testing.
*/
#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int ram = 0;
    int storage = 0;
    int gpu = 0;

public:
    Laptop() = default;
    //encapsulation via setter aligns well with OOP principles.
    void setInfo(const string brand, const string model, int ram, int storage, int gpu) {
        this -> brand = brand;
        this -> model = model;
        this -> ram = ram;
        this -> storage = storage;
        this -> gpu = gpu;
    }
    //the function checkRAM enough or not
    void checkRAM(int requiredRAM) const {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }
    //the function to upgrade GPU
    void setGPU(int gpu) {
        this -> gpu = gpu;
    }
    //the function to check GPU enough or not
    bool checkGPU(int requiredGPU) const {
        return gpu >= requiredGPU;
    }
    /**
     * Displays all information about the laptop.
     * The 'const' keyword ensures this method does not modify the object's state.
     */
    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << " GB" << endl;
    }
};

int main() {
    Laptop laptop1;
    laptop1.setInfo("Dell", "XPS 13", 8, 256, 16);
    laptop1.displayInfo();
    //check Ram enough or not
    laptop1.checkRAM(16);
    if (laptop1.checkGPU(12)) {
        cout << "This laptop has enough GPU to play game." << endl;
    } else {
        cout << "This laptop does not have enough GPU to run the software." << endl;
    }
    //check GPU
    laptop1.setGPU(80);
    laptop1.displayInfo();
    if (laptop1.checkGPU(12)) {
        cout << "This laptop has enough GPU to play game." << endl;
    } else {
        cout << "This laptop does not have enough GPU to run the software." << endl;
    }

    return 0;
}
/*
Testing output 
Brand: Dell
Model: XPS 13
RAM: 8 GB
Storage: 256 GB
GPU: 16 GB
This laptop does not have enough RAM to run the software.   
This laptop has enough GPU to play game.
Brand: Dell
Model: XPS 13
RAM: 8 GB
Storage: 256 GB
GPU: 80 GB
This laptop has enough GPU to play game.
*/
