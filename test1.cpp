#include <iostream>
using namespace std;
class university{
    public:
    int salary;
    string department;
    string faculty;
     university (){
        cout << "university constructor called" << endl;
        salary = 0;
        department = " ";
        faculty = " ";
     }
     void displayInfo(){
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "Faculty: " << faculty << endl;
     }
    };

int main(){
      university u1;
      u1.displayInfo();

        return 0;
}
