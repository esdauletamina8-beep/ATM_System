
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : Account() {
    interestRate = 0;
}

SavingsAccount::SavingsAccount(int number, double amount, double rate)
    : Account(number, amount) {
    interestRate = rate;
}

void SavingsAccount::calculateInterest() {
    double interest = balance * interestRate / 100;
    balance += interest;

    cout << "Paiyz qosyl dy: " << interest << " tenge" << endl;
    cout << "Jana balans: " << balance << " tenge" << endl;
}

void SavingsAccount::showAccountInfo() const {
    cout << "Jinaq shoty" << endl;
    cout << "Shot nomiri: " << accountNumber << endl;
    cout << "Balans: " << balance << " tenge" << endl;
    cout << "Paiyz molsherlemesi: " << interestRate << "%" << endl;
}
