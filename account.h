//
//  account.h
//  
//
//  Created by Eric Sirinian on 12/13/16.
//
//

#ifndef account_h
#define account_h

#include <iostream>

using namespace std;

class Account {
public:
    Account(double newBal);
    
    void deposit(double);
    void withdraw(double);

    double getBalance();
    
    virtual void display();
    
    void operator+(double n)
    {
        balance += n;
    }
    
protected:
    double balance;
    int accountNum;
    static int accountsCreated;
};

int Account::accountsCreated = 1000;

Account::Account(double newBal)
{
    if(newBal > 0.0)
    {
        balance = newBal;
    }
    else
    {
        balance = 0.0;
        cout << "Initial balance was invalid, it is now set to 0" << endl;
    }
    accountsCreated++;
    accountNum = accountsCreated;
}

void Account::deposit(double newVal)
{
    balance += newVal;
}

void Account::withdraw(double newVal)
{
    if(newVal <= balance)
        balance -= newVal;
    else
        cout << "Error, debit amount exceeds account balance" << endl;
}

double Account::getBalance()
{
    return balance;
}

void Account::display()
{
    cout << "Regular account: " << accountNum << " - Balance: $" << balance << endl;
}


#endif /* account_h */
