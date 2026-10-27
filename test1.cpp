
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    double speed;
    double fuel;
    bool lights;
    string name;

public:
    // Constructor
    Car(string n) {
        name = n;
        speed = 0;
        fuel = 50;
        lights = false;
    }

    // Speed up the car
    void speedUp(double amount) {
        if (amount > 0) {
            speed += amount;
            cout << "Car speed increased." << endl;
        }
    }

    // Slow down the car
    void slowDown(double amount) {
        if (amount > 0) {
            speed -= amount;

            if (speed < 0) {
                speed = 0;
            }

            cout << "Car slowed down." << endl;
        }
    }

    // Check fuel
    void checkFuel() {
        cout << "Fuel level: " << fuel << "%" << endl;
    }

    // Turn lights on or off
    void turnOnLights() {
        lights = true;
        cout << "Lights are ON." << endl;
    }

    void turnOffLights() {
        lights = false;
        cout << "Lights are OFF." << endl;
    }

    // Display dashboard information
    void displayDashboard() {
        cout << "\n--- Car Dashboard ---" << endl;
        cout << "Car name: " << name << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel: " << fuel << "%" << endl;
        cout << "Lights: " << (lights ? "ON" : "OFF") << endl;
    }
};

int main() {
    Car c1("Toyota");

    c1.speedUp(12);
    c1.slowDown(90);
    c1.checkFuel();
    c1.turnOnLights();
    c1.displayDashboard();

    return 0;
}




