
#include <iostream>
#include "Client.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "BankCard.h"
#include "Transaction.h"
#include "ATM.h"

using namespace std;

int main() {

    ATM atm;

    Client client1(1, "Amina Esdaulet", "991234567");
    atm.addClient(client1);

    Account account(10001, 50000);
    SavingsAccount savings(10002, 100000, 5);

    BankCard card("1234567890123456", 1234);

    int pin;

    cout << "===== BANKOMAT JUYESI =====" << endl;
    cout << "PIN kod engiziniz: ";
    cin >> pin;

    if (!card.checkPin(pin)) {
        cout << "Bankomat jumysy toqtatyldy!" << endl;
        return 0;
    }

    int choice;
    double amount;

    do {
        cout << "\n===== NEGIZGI MENU =====" << endl;
        cout << "1. Balans tekseru" << endl;
        cout << "2. Aqsha salu" << endl;
        cout << "3. Aqsha sheshu" << endl;
        cout << "4. Operatsiyalar tarihy" << endl;
        cout << "5. Karta aqparaty" << endl;
        cout << "6. Jinaq shotyna paiyz qoshu" << endl;
        cout << "7. Klient aqparaty" << endl;
        cout << "8. Jalpy operatsiyalar sany" << endl;
        cout << "0. Shygu" << endl;

        cout << "Tandau engiziniz: ";
        cin >> choice;

        switch (choice) {

        case 1:
            atm.checkBalance(account);
            break;

        case 2:
            cout << "Aqsha somasyn engiziniz: ";
            cin >> amount;
            atm.depositMoney(account, amount);
            break;

        case 3:
            cout << "Aqsha somasyn engiziniz: ";
            cin >> amount;
            atm.withdrawMoney(account, amount);
            break;

        case 4:
            atm.showTransactions();
            break;

        case 5:
            card.showCardInfo();
            break;

        case 6:
            savings.calculateInterest();
            savings.showAccountInfo();
            break;

        case 7:
            showClientDetails(client1);
            break;

        case 8:
            atm.showTotalTransactions();
            break;

        case 0:
            cout << "Bankomatpen jumys ayaqtaldy!" << endl;
            break;

        default:
            cout << "Qate tandau! Qaita engiziniz." << endl;
        }

    } while (choice != 0);

    return 0;
}
