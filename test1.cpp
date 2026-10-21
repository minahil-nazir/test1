#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "Toyota";
    void startEngine() {
        cout << "Engine started!" << endl; 
    }
};

class Car : protected Vehicle {          // Level 2
public:
    int doors = 4;
    void showCarDetails() {
        cout << "Brand: " << brand << ", Doors: " << doors << endl;
    }
};

class SportsCar : private Car {        // Level 3 — THIS makes it multilevel
public:
    int topSpeed = 300;
    void showSportsCar() {
        cout << " Doors: " << doors
             << " Top Speed: " << topSpeed << endl;
    }
};

int main() {
    SportsCar sc;
    sc.showSportsCar();     // own           (child)
    return 0;
}

