#include <iostream>
using namespace std;
class BankAccount {
private:
 double balance;
public:
 BankAccount(double initialBalance) { 
    balance = initialBalance; }

 void deposit(double amount) {
 if (amount > 0) balance += amount;
 }
 void withdraw(double amount) {
 if (amount > 0 && amount <= balance) balance
-= amount;
 else cout << "Insufficient balance!" << endl;
 }
 double checkBalance() { 
    return balance; }
};
int main() {
 BankAccount myAccount(5000);
 myAccount.deposit(150);
 myAccount.withdraw(20000);
 cout << "Current Balance: $"
<< myAccount.checkBalance()
<< endl;
 return 0;
}

