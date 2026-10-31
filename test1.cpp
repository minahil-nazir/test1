#include <iostream>
using namespace std;
class bankaccount{
    public:
    int balance;
    static float rate;
};
float bankaccount :: rate=6.7;
 int main(){
bankaccount b1,b2;
b1.balance=1000;
b2.balance=2000;
cout<<b1.balance<<endl;
cout<<b2.balance<<endl;
cout<<bankaccount::rate;
return 0;
 }






