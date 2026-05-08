#include <iostream>
#include <iomanip>
using namespace std;

class CurrencyConverter {
private:
    double usdToInr = 83.5;
    double usdToEur = 0.92;
    double usdToGbp = 0.79;
    double amount;

public:
    CurrencyConverter() : amount(0) {}

    void inputAmount() {
        cout << "Enter amount in USD: ";
        cin >> amount;
        if (amount < 0) {
            cout << "Amount cannot be negative!\n";
            amount = 0;
        }
    }

    void convertToInr() {
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << (amount * usdToInr) << " INR\n";
    }

    void convertToEur() {
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << (amount * usdToEur) << " EUR\n";
    }

    void convertToGbp() {
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << (amount * usdToGbp) << " GBP\n";
    }

    void displayMenu() {
        cout << "\n===== CURRENCY CONVERTER =====\n";
        cout << "1. Convert USD to INR\n";
        cout << "2. Convert USD to EUR\n";
        cout << "3. Convert USD to GBP\n";
        cout << "4. Exit\n";
        cout << "==============================\n";
    }
};

int main() {
    CurrencyConverter converter;
    int choice;

    cout << "Welcome to Currency Converter\n";
    converter.inputAmount();

    while (true) {
        converter.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                converter.convertToInr();
                break;
            case 2:
                converter.convertToEur();
                break;
            case 3:
                converter.convertToGbp();
                break;
            case 4:
                cout << "Thank you for using Currency Converter!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
