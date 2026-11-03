#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
using namespace std;

class Client {
private:
    int clientID;
    string name;
    string phone;

public:
    Client();
    Client(int id, string n, string p);

    void showInfo() const;

    int getClientID() const;
    string getName() const;

    friend void showClientDetails(const Client& client);
};

#endif
