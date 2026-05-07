#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Overload + operator
    Number operator+(const Number &obj) {
        return Number(value + obj.value);
    }

    // Overload - operator
    Number operator-(const Number &obj) {
        return Number(value - obj.value);
    }

    // Overload ++ operator (prefix)
    Number& operator++() {
        ++value;
        return *this;
    }

    // Overload == operator
    bool operator==(const Number &obj) {
        return value == obj.value;
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, const Number &obj) {
        out << obj.value;
        return out;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(5);

    Number sum = n1 + n2;
    cout << "Sum: " << sum << endl;

    Number diff = n1 - n2;
    cout << "Difference: " << diff << endl;

    ++n1;
    cout << "After ++n1: " << n1 << endl;

    if (n1 == n2) {
        cout << "n1 and n2 are equal" << endl;
    } else {
        cout << "n1 and n2 are not equal" << endl;
    }

    return 0;
}