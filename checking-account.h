//
//  checking-account.h
//  
//
//  Created by Eric Sirinian on 12/13/16.
//
//

#ifndef checking_account_h
#define checking_account_h

#include <iostream>
#include "account.h"

using namespace std;

class CheckingAccount : public Account {
public:
    CheckingAccount(double newBal, double newFee);
    
    void deposit(double n);
    void withdraw(double);
    
    void display();
    
    void operator+(double n)
    {
        Account::balance = Account::balance + n - fee;
    }
    
protected:
    double fee;
};

CheckingAccount::CheckingAccount(double newBal, double newFee) : Account(newBal)
{
    fee = newFee;
}

void CheckingAccount::deposit(double n)
{
    Account::deposit(n - fee);
}

void CheckingAccount::withdraw(double n)
{
    int cBal = Account::getBalance();
    Account::withdraw(n);
    int nBal = Account::getBalance();
    
    if(nBal < cBal)
        Account::withdraw(fee);
    
}

void CheckingAccount::display()
{
    cout << "Checking account: " << Account::accountNum << " - Balance: $" << Account::balance << " - Transaction Fee: $" << fee << endl;
}

#endif /* checking_account_h */
