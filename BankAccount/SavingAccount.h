#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
 
#include "BankAccount.h"
 
class SavingAccount : public BankAccount {

protected:
 
    bool status;
 
public:
 
    SavingAccount() : BankAccount() {}
    void withdraw(double);
    void deposit(double);
    void monthlyProc();
 
};
#endif
