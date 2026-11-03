
#include "Transaction.h"

Transaction::Transaction() {
    transactionID = 0;
    transactionType = "Belgisiz";
    amount = 0;
}

Transaction::Transaction(int id, string type, double sum) {
    transactionID = id;
    transactionType = type;
    amount = sum;
}

void Transaction::showTransaction() const {
    cout << "Operatsiya ID: " << transactionID << endl;
    cout << "Operatsiya turi: " << transactionType << endl;
    cout << "Somasy: " << amount << " tenge" << endl;
    cout << "------------------------" << endl;
}

int Transaction::getTransactionID() const {
    return transactionID;
}

double Transaction::getAmount() const {
    return amount;
}
