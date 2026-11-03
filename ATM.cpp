
#include "ATM.h"

int ATM::totalTransactions = 0;

ATM::ATM() {
    clientCount = 0;
    transactionCount = 0;
}

void ATM::addClient(const Client& client) {
    if (clientCount < 10) {
        clients[clientCount] = client;
        clientCount++;

        cout << "Klient sattili qosyldy!" << endl;
    } else {
        cout << "Klientter sany shekten asyp ketti!" << endl;
    }
}

void ATM::Receipt::printReceipt(string type, double amount) {
    cout << "\n===== TUBIRTек =====" << endl;
    cout << "Operatsiya: " << type << endl;
    cout << "Somasy: " << amount << " tenge" << endl;
    cout << "Operatsiya ayaqtaldy!" << endl;
    cout << "====================" << endl;
}

void ATM::depositMoney(Account& account, double amount) {
    if (transactionCount >= 100) {
        cout << "Operatsiyalar tizimi toly!" << endl;
        return;
    }

    if (amount <= 0) {
        cout << "Qate soma!" << endl;
        return;
    }

    account.deposit(amount);

    transactions[transactionCount] =
        Transaction(transactionCount + 1, "Aqsha salu", amount);

    transactionCount++;
    totalTransactions++;

    receipt.printReceipt("Aqsha salu", amount);
}

void ATM::withdrawMoney(Account& account, double amount) {
    if (transactionCount >= 100) {
        cout << "Operatsiyalar tizimi toly!" << endl;
        return;
    }

    if (account.withdraw(amount)) {
        transactions[transactionCount] =
            Transaction(transactionCount + 1, "Aqsha sheshu", amount);

        transactionCount++;
        totalTransactions++;

        receipt.printReceipt("Aqsha sheshu", amount);
    }
}

void ATM::checkBalance(const Account& account) const {
    cout << "Agymdagy balans: "
         << account.getBalance() << " tenge" << endl;
}

void ATM::showTransactions() const {
    cout << "\n===== OPERATSIYALAR TIZIMI =====" << endl;

    for (int i = 0; i < transactionCount; i++) {
        transactions[i].showTransaction();
    }
}

void ATM::showTotalTransactions() const {
    cout << "Jalpy operatsiyalar sany: "
         << totalTransactions << endl;
}

int ATM::getTotalTransactions() {
    return totalTransactions;
}
