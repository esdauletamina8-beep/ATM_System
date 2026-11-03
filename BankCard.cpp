
#include "BankCard.h"

BankCard::BankCard() {
    cardNumber = "0000000000000000";
    pinCode = 0;
    isActive = true;
}

BankCard::BankCard(string number, int pin) {
    cardNumber = number;
    pinCode = pin;
    isActive = true;
}

bool BankCard::checkPin(int pin) const {
    if (isActive && pinCode == pin) {
        cout << "PIN kod durys!" << endl;
        return true;
    }

    cout << "PIN kod qate nemese karta belsendi emes!" << endl;
    return false;
}

void BankCard::blockCard() {
    isActive = false;
    cout << "Karta bloktaldy!" << endl;
}

void BankCard::showCardInfo() const {
    cout << "Karta nomiri: " << cardNumber << endl;
    cout << "Karta kuiy: "
         << (isActive ? "Belsendi" : "Bloktaldy") << endl;
}

string BankCard::getCardNumber() const {
    return cardNumber;
}
