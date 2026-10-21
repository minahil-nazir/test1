#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
  
public:
    void display() {
        cout << "Brand: " << brand << endl;
    }
};

class car : public Vehicle {
public:
    int doors = 4;    // inaccessible from main

    void showDoors() {
        cout << "Doors: " << doors << endl;
    }
};

int main() {
    car c;
    c.brand = "Toyota";
    c.doors = 4;
    c.display();
    c.showDoors();
    return 0;
};

