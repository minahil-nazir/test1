#include<iostream>
using namespace std;
int main()
{
    int amara_age;
    int amir_age;
    cout << "Enter amara age: ";
    cin >> amara_age;
    cout << "Enter amir age: ";
    cin >> amir_age;
    if(amara_age>amir_age)
    {
        cout<<"Amara is older than Amir";
    }
    else if(amara_age<amir_age)
    {
        cout<<"Amir is older than Amara";
    }
    else
    {
        cout<<"Amara and Amir are of the same age";
    }
}
