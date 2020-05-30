#include "CheckingAccount.h"
#include "BankAccount.h"
#include <iostream>
 
using namespace std;
 
void CheckingAccount::deposit(double money) {
    if (balance + money > 25) {
        status = true;
    }
    if (status == false) {
        cout << "\nYour account is inactive.\n";
        return;
    }
    BankAccount::deposit(money);
}
 
void CheckingAccount::withdraw(double money) {
 
    if (money < 0) {
 
        cout << "\nWithdraw positive numbers only.\n";
    }
 
    if (status == false) {
 
        cout << "\nYour account is inactive\n";
        return;
    }
 
    else if (balance - money < 0) {
 
        cout << "You shouldn't withdraw more than the account balance\n"; 
        serviceCharges += 15.00; 
        } 
        else if (balance - money > 0 && balance - money < 25  ){
 
        cout << "\nYour account is below $25.00. It will be deactivated\n";
        status = false;
    }
 
    else {
        BankAccount::withdraw(money);
    }
}
 
void CheckingAccount::monthlyProc(){
 
    cout << "\n\nCHECKING ACCOUNT MONTHLY STATISTICS:";
    serviceCharges += (5.00f + (withdrawals*.10f));
    BankAccount::monthlyProc();
    BankAccount::getMonthlyStats();
    deposits = 0;
    withdrawals = 0;
    serviceCharges = 0;
}