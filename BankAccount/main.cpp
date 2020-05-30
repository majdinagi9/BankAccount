#include "SavingAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <cctype>
 
using namespace std;
 
//function prototype
void call(int, SavingAccount &, CheckingAccount &);
 
int main()
{
    SavingAccount savings;
    CheckingAccount checking;
 
    int num;
    //display the menu list
    do
    {
       cout << "\n******** BANK ACCOUNT MENU ********" << endl
            << "1.  Savings Account Deposit" << endl
            << "2.  Checking Account Deposit" << endl
            << "3.  Savings Account Withdrawal" << endl
            << "4.  Checking Account Withdrawal" << endl
            << "5.  Update and Display Account Statistics" << endl
            << "6.  Exit" << endl
            << "Your choice, please: (1-6)\n "; cin >> num;
 
        /*if not valid entry*/
        while (num < 1 || num > 6)
        {
            cout << " please enter: (1-6) "; cin >> num;
        }
 
        call(num, savings, checking);
 
    } while (num != 6);
 
    return 0;
}
 
//call function
void call(int num, SavingAccount &savings, CheckingAccount &checking){
    double money;
 
    //case 1 and 2 if we have deposit
    switch (num){
    case 1: cout << "\nEnter amount to deposit: "; cin >> money;
        savings.deposit(money);
        break;
 
    case 2: cout << "\nEnter amount to deposit: "; cin >> money;
        checking.deposit(money);
        break;
        //case 3 and 4 if we have withdraw
    case 3: cout << "\nEnter amount to withdraw: "; cin >> money;
        savings.withdraw(money);
        break;
 
    case 4: cout << "\nEnter amount to withdraw: "; cin >> money;
        checking.withdraw(money);
        break;
    //case 5 to display the monthly report
    case 5:
        cin.ignore();
        savings.monthlyProc();
        cout << "\nPress enter to continue..";
        cin.get();
        checking.monthlyProc();
 
 
    }
}


