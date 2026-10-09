#include <iostream>
using namespace std;

int main() {
    string stream;
    int marks;

    cout << "Enter your stream (Science/Commerce/Arts): ";
    cin >> stream;
    cout << "Enter your marks: ";
    cin >> marks;

    if(stream == "Science") {
        if(marks >= 90) {
            cout << "Eligible for engineering" << endl;
        } else {
            cout << "not eligible for engineering." << endl;
        }
    }  if(stream == "Commerce") {
        if(marks >= 85) {
            cout << "eligibel for b.com." << endl;
        } else {
            cout << "choose suitable courses." << endl;
        }
    } else {
        cout << "Invalid stream entered." << endl;
    }
}
