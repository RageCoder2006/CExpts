#include <iostream>
using namespace std;

class Account {
private:
    int accno;
    string name;

public:
    char acctype; //s-> savings, c-> current
    float balance;

    Account(int accno, string name, char acctype, float balance) {
        this->accno = accno;
        this->name = name;
        this->acctype = acctype;
        this->balance = balance;
    }

    void display() {
        cout << "AccountNumber: " << accno << endl;
        cout << "Account: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "AccountType: " << acctype << endl;
    }
};

int main() {
    Account acc(123, "xyz", 'c', 123.21);
    acc.display();
}
