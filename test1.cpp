#include <iostream>
using namespace std;
int a ,b;
int add (int a,int b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
 int main(){
    cout<<add(2,5)<<endl;
    cout<< add(4.3,5.6)<<endl;
    cout << add(5,4,5);
 }






