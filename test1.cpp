#include<iostream>
using namespace std;
int main()
{
   double amount,discount,net_payable;
   amount = 0;
   discount = 0;
   net_payable = 0;
    cout<<"Enter the amount of bill: ";
    cin>>amount;
    if(amount>5000)
    {
        discount = amount*0.1;
        net_payable = amount - discount;
        cout<<"Discount is: "<<discount<<endl;
    }
    else if(amount>3000)
    {
        discount = amount*0.05;
        net_payable = amount - discount;
        cout<<"Discount is: "<<discount<<endl;
    }
    else
    {
        discount = 0;
    }
}
