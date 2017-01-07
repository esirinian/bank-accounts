//
//  main.cpp
//  
//
//  Created by Eric Sirinian on 12/13/16.
//
//

#include <stdio.h>
#include <iostream>

#include "account.h"
#include "checking-account.h"
#include "savings-account.h"

using namespace std;

int main()
{
    // Regular Account
    cout<<"Account acc1(100.5);"<<endl;
    Account acc1(100.5);
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;
    cout<<"acc1.withdraw(200);"<<endl;
    acc1.withdraw(200);
    cout<<"acc1.withdraw(50);"<<endl;
    acc1.withdraw(50);
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;
    
    // Savings Account
    cout<<"\nSavingsAccount save1(100, 0.1);"<<endl;
    SavingsAccount save1(100, 0.1);
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;
    double interest = save1.calculateInterest();
    save1.deposit(interest);
    cout<<"Adding interest"<<endl;
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;
    cout<<"save1.withdraw(200);"<<endl;
    save1.withdraw(200);
    cout<<"save1.withdraw(50);"<<endl;
    save1.withdraw(50);
    cout<<"Account save1 balance = $"<<save1.getBalance()<<endl;
    
    // Checking Account
    cout<<"\nCheckingAccount check1(100, 2);"<<endl;
    CheckingAccount check1(100, 2);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(50);"<<endl;
    check1.withdraw(50);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(50);"<<endl;
    check1.withdraw(50);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(20);"<<endl;
    check1.withdraw(20);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(6);"<<endl;
    check1.withdraw(6);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    //18
    cout<<"check1.deposit(20);"<<endl;
    check1.deposit(20);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    //36
    
    // Overloaded + operator
    cout<<"\nDemonstrating overloaded + operator"<<endl;
    cout<<"acc1 + 60.5;"<<endl;
    acc1 + 60.5;
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;
    cout<<"save1 + 50.5;"<<endl;
    save1 + 50.5;
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;
    cout<<"check1+ 50;"<<endl;
    check1 + 50;
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    
    
    // Polymorphism
    cout<<"\nDemonstrating polymorphism"<<endl;
    Account *ac1 = &acc1;
    SavingsAccount *ac2 = &save1;
    CheckingAccount *ac3 = &check1;
    Account *accounts[3]={ac1, ac2, ac3}; // Array of pointers
    for (int i=0; i<3; i++)
        accounts[i]->display();
    
    return 0;
}
