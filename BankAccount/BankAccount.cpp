#include "BankAccount.h"
#include <iostream>
#include <iomanip>
 
using namespace std;
 
BankAccount::BankAccount() {
    balance = 0.00;
    deposits = 0;
    withdrawals = 0;
    interestRate = 0.05;
    serviceCharges = 0.00;
    status = true;  //flag, false if the account below 25
}
 
void BankAccount::deposit(double money) {
    balance += money;
    deposits++;
}
 
void BankAccount::withdraw(double money) {
    balance -= money;
    withdrawals++;
}
 
void BankAccount::calcInt() {
 
    double monthlyInterestRate = interestRate / 12;
    double monthlyInterest = balance * monthlyInterestRate;
    balance += monthlyInterest;
    //check if the account balance is larger than 25 then set the flag to true
    if (balance > 25) {
        status = true;
    }
}
 
void BankAccount::monthlyProc() {
    calcInt();
    balance -= serviceCharges;
}
 
void BankAccount::getMonthlyStats(){
 
    cout << "\nWithdrawals:\t\t" << withdrawals
         << "\nDeposits:   \t\t" << deposits << setprecision(2)
         << fixed << showpoint << "\nService Charges:\t"
         << serviceCharges << "\nEnding Balance:\t\t"
         << balance << endl;
}