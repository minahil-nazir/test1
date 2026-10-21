#include <iostream>
using namespace std;
 // multilevel inheritance with parametrzed constructors
class Vehicle {
public:
    string brand = "Toyota";
    Vehicle( string b){
        brand = b;
        cout << "Vehicle constructor called!" << endl;
    } 
    void startEngine() {
        cout << "Engine started!" << endl; 
    }
};

class Car : protected Vehicle {          // Level 2
public:
    int doors = 4;
    Car (string b, int d) : Vehicle(b) {
        doors = d;
        cout << "Car constructor called!" << endl;
    }
    void showCarDetails() {
        cout << "Brand: " << brand << ", Doors: " << doors << endl;
    }
};



int main() {
     Car c("Honda", 4);
    c.showCarDetails();     // own           (child)
    return 0;
}

