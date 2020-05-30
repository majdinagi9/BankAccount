#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
 
class BankAccount {
protected:

  double balance;
  int deposits;
  int withdrawals;
  double interestRate;
  double serviceCharges;
  bool status;
 
 
public:

  BankAccount();
  virtual void deposit(double);
  virtual void withdraw(double);
  virtual void calcInt();
  virtual void monthlyProc();
  void getMonthlyStats();
 
};
#endif