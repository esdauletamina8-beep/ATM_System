
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
using namespace std;

class Transaction {
private:
    int transactionID;
    string transactionType;
    double amount;

public:
    Transaction();
    Transaction(int id, string type, double sum);

    void showTransaction() const;

    int getTransactionID() const;
    double getAmount() const;
};

#endif
