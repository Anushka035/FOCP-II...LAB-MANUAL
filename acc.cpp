#include<iostream>
using namespace std;
class Account{
    int accountno;
    double balance;
    public:
    Account(int accNo,double bal){
        accountno=accNo;
        balance=bal;
    }
    void DisplayAccount(){
        cout<<"\n Account number="<<accountno<<"\n balance="<<balance;
    }
    double getBalance(){
        return balance;
    }
};

class SavingAccount:public Account{double interestRate;
public:
SavingAccount(int accNo,double bal,double rate)
:Account(accNo,bal){
    interestRate=rate;}
void calculateInterest() {
        double interest = getBalance() * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }};

int main() {
    SavingAccount sa(12345, 10000, 5);
    sa.DisplayAccount();
    sa.calculateInterest();
    return 0;
}