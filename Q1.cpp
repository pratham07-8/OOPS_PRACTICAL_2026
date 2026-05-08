//●	WAP to demonstrate inline function for basic arithmetic operations.
#include <iostream>
using namespace std;

// Inline functions for arithmetic operations
inline int add(int a, int b) {
    return a + b;
}

inline int subtract(int a, int b) {
    return a - b;
}

inline int multiply(int a, int b) {
    return a * b;
}

inline float divide(int a, int b) {
    return (b != 0) ? (float)a / b : 0;  // Avoid division by zero
}

int main() {
    int x = 20, y = 5;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;

    return 0;
}
