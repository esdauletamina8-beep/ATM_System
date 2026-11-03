
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount();
    SavingsAccount(int number, double amount, double rate);

    void calculateInterest();
    void showAccountInfo() const override;
};

#endif
