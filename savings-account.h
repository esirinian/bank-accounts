//
//  savings-account.h
//  
//
//  Created by Eric Sirinian on 12/13/16.
//
//

#ifndef savings_account_h
#define savings_account_h

#include <iostream>
#include "account.h"

using namespace std;

class SavingsAccount : public Account {
public:
    SavingsAccount(double newBal, double newInterest);
    
    double calculateInterest();
    
    void display();
    
protected:
    double interest;
};

SavingsAccount::SavingsAccount(double newBal, double newInterest) : Account(newBal)
{
    interest = newInterest;
}

double SavingsAccount::calculateInterest()
{
    double bal = Account::getBalance();
    
    return (bal * interest);
}

void SavingsAccount::display()
{
    cout << "Savings account: " << Account::accountNum << " - Balance: $" << Account::balance << " - Interest Rate: %" << interest * 100 << endl;
}

#endif /* savings_account_h */
