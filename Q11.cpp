#include <iostream>
#include <vector>
using namespace std;

class Account {
private:
    string name;
    long accountNumber;
    double balance;
public:
    Account(string n, long acc, double bal) : name(n), accountNumber(acc), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }

    long getAccountNumber() {
        return accountNumber;
    }
};

class Bank {
private:
    vector<Account> accounts;
public:
    void addAccount(string name, long acc, double bal) {
        accounts.push_back(Account(name, acc, bal));
    }

    Account* findAccount(long acc) {
        for (auto &a : accounts) {
            if (a.getAccountNumber() == acc) {
                return &a;
            }
        }
        return nullptr;
    }
};

int main() {
    Bank bank;
    bank.addAccount("John", 12345, 1000.0);
    bank.addAccount("Jane", 67890, 500.0);

    int choice;
    long acc;
    double amount;

    while (true) {
        cout << "Bank Management System" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 4) break;

        cout << "Enter account number: ";
        cin >> acc;

        Account *accPtr = bank.findAccount(acc);
        if (!accPtr) {
            cout << "Account not found" << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                accPtr->deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                accPtr->withdraw(amount);
                break;
            case 3:
                accPtr->checkBalance();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}