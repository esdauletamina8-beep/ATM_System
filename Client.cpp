
#include "Client.h"

Client::Client() {
    clientID = 0;
    name = "Unknown";
    phone = "Unknown";
}

Client::Client(int id, string n, string p) {
    clientID = id;
    name = n;
    phone = p;
}

void Client::showInfo() const {
    cout << "Client ID: " << clientID << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
}

int Client::getClientID() const {
    return clientID;
}

string Client::getName() const {
    return name;
}

void showClientDetails(const Client& client) {
    cout << "Client ID: " << client.clientID << endl;
    cout << "Name: " << client.name << endl;
    cout << "Phone: " << client.phone << endl;
}
