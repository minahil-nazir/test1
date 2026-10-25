#include <iostream>
using namespace std;
class Test {
    private :
        string name;
        int value;

    public :
    void setName(string n){
        name = n;
    }
    void setValue(int v) {
        value = v;
    }
    string getName(){
        return name;
    }
    int getValue() {
        return value;
    }
};
int main() {
    Test t;
    t.setValue(10);
    cout << "Value: " << t.getValue() << endl;
    t.setName("Laptop");
    cout << "Name: " << t.getName() << endl;

    return 0;
};