
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account();
    Account(int number, double amount);

    virtual void deposit(double amount);
    virtual bool withdraw(double amount);

    double getBalance() const;
    int getAccountNumber() const;

    virtual void showAccountInfo() const;

    friend class ATM;
};

#endif
