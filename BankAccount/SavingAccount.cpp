
#include "SavingAccount.h"
#include <iostream>
 
using namespace std;
 
void SavingAccount::deposit(double money) {
 
    if (balance + money > 25) status = true;
    BankAccount::deposit(money);
    
}
 
void SavingAccount::withdraw(double money) {
 
    if (money < 0) {
        cout << "Withdraw positive numbers only.\n";
    }//NO
 
    if (status == false) {
        cout << "Your account now is inactive.\n";
        return;
    }//DONE
 
    else if (balance - money < 0) {
        cout << "You cannot withdraw more than \nthe account balance ";
    }
 
    else if (balance - money < 25.00 && balance - money > 0) {
        cout << "\nYour account has fallen below $25.00. It will be deactivated\n";
        BankAccount::withdraw(money); 
        status = false; 
        } 
        else { 
          BankAccount::withdraw(money); 
        } 
        
} 
        
        
void SavingAccount::monthlyProc() { 
  
  if (withdrawals > 4){
        serviceCharges += 1.00f * (withdrawals - 4);
 
        if (balance - serviceCharges  < 25.00) {
            status = false;
            cout << "\nYour account has fallen below $25.00.It will be deactivated\n";
        }
        cout << "\nSAVINGS ACCOUNT MONTHLY STATISTICS:";
    }
 
    BankAccount::monthlyProc();
    BankAccount::getMonthlyStats();
    deposits = 0;
    withdrawals = 0;
    serviceCharges = 0;
}