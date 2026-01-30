#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM() {
        balance = 1000; 
    }

    void deposit(int amount) {
        balance = amount + balance;
        cout << "Deposited: " << amount << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main() {
    ATM user;
    user.deposit(500);
    user.withdraw(300);

    return 0;
}
