#include <iostream>
using namespace std;

class Student {
private:
    string name;        // inaccessible from main
public:
    int age;
    int rollno;
protected:
    int cgpa;           // inaccessible from main

public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

class teacher : public Student {
private:
    string subject;     // inaccessible from main
public:
    void showSubject() {
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    teacher t;
    t.age = 30;         // ✅ public — OK
    t.rollno = 101;     // ✅ public — OK
    t.display();
    t.showSubject();
    return 0;
};

