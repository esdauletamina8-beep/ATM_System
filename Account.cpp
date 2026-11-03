
#include "Account.h"

Account::Account() {
    accountNumber = 0;
    balance = 0;
}

Account::Account(int number, double amount) {
    accountNumber = number;
    balance = amount;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Aksha satti salindi!" << endl;
    } else {
        cout << "Hate soma!" << endl;
    }
}

bool Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Aksha satti sheshildi!" << endl;
        return true;
    }

    cout << "Insufficient balance or invalid amount!" << endl;
    return false;
}

double Account::getBalance() const {
    return balance;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

void Account::showAccountInfo() const {
    cout << "Shon Nomer: " << accountNumber << endl;
    cout << "Balance: " << balance << " KZT" << endl;
}
