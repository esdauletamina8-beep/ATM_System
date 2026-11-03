
#ifndef ATM_H
#define ATM_H

#include "Client.h"
#include "Account.h"
#include "BankCard.h"
#include "Transaction.h"

class ATM {
private:
    static int totalTransactions;

    Client clients[10];
    Transaction transactions[100];

    int clientCount;
    int transactionCount;

    class Receipt {
    public:
        void printReceipt(string type, double amount);
    };

    Receipt receipt;

public:
    ATM();

    void addClient(const Client& client);
    void depositMoney(Account& account, double amount);
    void withdrawMoney(Account& account, double amount);
    void checkBalance(const Account& account) const;

    void showTransactions() const;
    void showTotalTransactions() const;

    static int getTotalTransactions();
};

#endif
