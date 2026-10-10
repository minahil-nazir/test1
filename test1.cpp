#include <iostream>
using namespace std;
  class BankAccount {
    private:
   double balance;
public:
void setbalance(double b) {
balance = b;
}
double getbalance() {
return balance;

}
};
int main() {
BankAccount * acc = new BankAccount();
acc->setbalance(1000.0);
cout << acc->getbalance() << endl;
return 0;
};
