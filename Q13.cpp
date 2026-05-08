#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    Account(int accNum, string name, double initialBalance)
        : accountNumber(accNum), accountHolder(name), balance(initialBalance) {}

    int getAccountNumber() { return accountNumber; }
    string getAccountHolder() { return accountHolder; }
    double getBalance() { return balance; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            return true;
        }
        cout << "Insufficient balance or invalid amount!\n";
        return false;
    }

    void displayAccount() {
        cout << fixed << setprecision(2);
        cout << "Account #" << accountNumber << " | " << accountHolder
             << " | Balance: " << balance << endl;
    }
};

class Bank {
private:
    vector<Account> accounts;
    int nextAccountNumber = 1001;

public:
    void createAccount() {
        string name;
        double initialBalance;
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter initial balance: ";
        cin >> initialBalance;

        accounts.push_back(Account(nextAccountNumber++, name, initialBalance));
        cout << "Account created successfully! Account #" << (nextAccountNumber - 1) << endl;
    }

    Account* findAccount(int accNum) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getAccountNumber() == accNum) {
                return &accounts[i];
            }
        }
        return nullptr;
    }

    void deposit() {
        int accNum;
        double amount;
        cout << "Enter account number: ";
        cin >> accNum;
        Account* acc = findAccount(accNum);
        if (acc) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc->deposit(amount);
        } else {
            cout << "Account not found!\n";
        }
    }

    void withdraw() {
        int accNum;
        double amount;
        cout << "Enter account number: ";
        cin >> accNum;
        Account* acc = findAccount(accNum);
        if (acc) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc->withdraw(amount);
        } else {
            cout << "Account not found!\n";
        }
    }

    void checkBalance() {
        int accNum;
        cout << "Enter account number: ";
        cin >> accNum;
        Account* acc = findAccount(accNum);
        if (acc) {
            cout << fixed << setprecision(2);
            cout << "Balance: " << acc->getBalance() << endl;
        } else {
            cout << "Account not found!\n";
        }
    }

    void displayAllAccounts() {
        cout << "\n===== ALL ACCOUNTS =====\n";
        for (int i = 0; i < accounts.size(); i++) {
            accounts[i].displayAccount();
        }
        cout << "========================\n";
    }

    void menu() {
        int choice;
        while (true) {
            cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
            cout << "1. Create Account\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Check Balance\n";
            cout << "5. Display All Accounts\n";
            cout << "6. Exit\n";
            cout << "===================================\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    createAccount();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    checkBalance();
                    break;
                case 5:
                    displayAllAccounts();
                    break;
                case 6:
                    cout << "Thank you for using Bank Management System!\n";
                    return;
                default:
                    cout << "Invalid choice! Please try again.\n";
            }
        }
    }
};

int main() {
    Bank bank;
    bank.menu();
    return 0;
}
