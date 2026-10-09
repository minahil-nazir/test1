#include <iostream>
using namespace std;
class mobilephone{
    public:
    int batterylife;
    string brand;
    string model;
     void makecall() {
        cout <<"brand: " << brand <<"model: " << model << " Making a call" << endl;
     }
     void sendMessage(){
        cout <<"brand: " << brand <<"model: " << model << " Sending a message" << endl;
     }
     void playMusic() {
        cout <<"brand: " << brand <<"model: " << model << " Music" << endl;
     }

    };

int main(){
      mobilephone p1;
      p1.brand = "Iphone";
      p1.model = "18 Pro Max"; 
      p1.batterylife = 80;
      p1.makecall();
      p1.sendMessage();
      p1.playMusic();


    mobilephone p2;
        p2.brand = "Samsung";
        p2.model = "S21"; 
        p2.batterylife = 90;
        p2.makecall();
        p2.sendMessage();
        p2.playMusic();


        return 0;
}
