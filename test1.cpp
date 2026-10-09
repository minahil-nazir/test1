#include <iostream>
using namespace std;
class car {
    public:
    int year;
    string brand;
    string model;
     void startEngine() {
        cout <<"brand: " << brand <<"model: " << model << " Engine started" << endl;
     }
     void stopEngine(){
        cout <<"brand: " << brand <<"model: " << model << " Engine stopped" << endl;
     }
     void beep() {
        cout <<"brand: " << brand <<"model: " << model << " Beep Beep" << endl;
     }
     void accelarate() {
        cout <<"brand: " << brand <<"model: " << model << " Accelerating" << endl;
     }
    };

int main(){
      car c1;
      c1.brand = "Toyota";
      c1.model = "Corolla"; 
      c1.year = 2020;
      c1.startEngine();
      c1.stopEngine();
      c1.beep();
      c1.accelarate();


    car c2;
        c2.brand = "Honda";
        c2.model = "Civic"; 
        c2.year = 2021;
        c2.startEngine();
        c2.stopEngine();
        c2.beep();
        c2.accelarate();

        return 0;
}
