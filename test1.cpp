#include <iostream>
using namespace std;
class Student{
    public:
    int age;
    string name;
    string gender;
    Student(int a, string n, string g){
        age = a;
        name = n;
        gender = g;
    }
    void displayInfo(){
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main(){
       Student s1(22, "Ahmad","male");
       s1.displayInfo();
       Student s2(20, "Ali","male");
       s2.displayInfo();

        return 0;
}
