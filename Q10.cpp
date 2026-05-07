#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    double usdToInr = 83.0;
    double usdToEur = 0.85;
    double eurToInr = 90.0;
public:
    void convert() {
        int choice;
        double amount;
        cout << "Currency Converter Menu:" << endl;
        cout << "1. USD to INR" << endl;
        cout << "2. USD to EUR" << endl;
        cout << "3. EUR to INR" << endl;
        cout << "4. INR to USD" << endl;
        cout << "5. EUR to USD" << endl;
        cout << "6. INR to EUR" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << "Enter amount: ";
        cin >> amount;

        switch (choice) {
            case 1:
                cout << amount << " USD = " << amount * usdToInr << " INR" << endl;
                break;
            case 2:
                cout << amount << " USD = " << amount * usdToEur << " EUR" << endl;
                break;
            case 3:
                cout << amount << " EUR = " << amount * eurToInr << " INR" << endl;
                break;
            case 4:
                cout << amount << " INR = " << amount / usdToInr << " USD" << endl;
                break;
            case 5:
                cout << amount << " EUR = " << amount / usdToEur << " USD" << endl;
                break;
            case 6:
                cout << amount << " INR = " << amount / eurToInr << " EUR" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }
};

int main() {
    CurrencyConverter cc;
    cc.convert();
    return 0;
}