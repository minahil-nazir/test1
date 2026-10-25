#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void showInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

    void accelerate()
    {
        speed = speed + 10;
    }
};

int main()
{
    Car c1;
    c1.brand = "Toyota";
    c1.speed = 60;

    c1.accelerate();
    c1.showInfo();

    return 0;
}



  

  



