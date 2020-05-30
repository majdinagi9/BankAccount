#ifndef CheckingAccount_H
#define CheckingAccount_H
 
#include "BankAccount.h"
 
class CheckingAccount : public BankAccount {
 
public:
 
    CheckingAccount() : BankAccount() {}
    void deposit(double);
    void withdraw(double);
    void monthlyProc();
};
#endif