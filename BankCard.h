
#ifndef BANKCARD_H
#define BANKCARD_H

#include <iostream>
#include <string>
using namespace std;

class BankCard {
private:
    string cardNumber;
    int pinCode;
    bool isActive;

public:
    BankCard();
    BankCard(string number, int pin);

    bool checkPin(int pin) const;
    void blockCard();
    void showCardInfo() const;

    string getCardNumber() const;
};

#endif
