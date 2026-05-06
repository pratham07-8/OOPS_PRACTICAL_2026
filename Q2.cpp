//	WAP to demonstrate default arguments using simple interest calculation.
#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float principal, float rate = 5.0, float time = 1.0) {
    return (principal * rate * time) / 100;
}

int main() {
    float p;

    cout << "Enter Principal Amount: ";
    cin >> p;

    // Case 1: Only principal provided (rate=5%, time=1 year by default)
    cout << "Simple Interest (default rate & time): " 
         << simpleInterest(p) << endl;

    // Case 2: Principal + rate provided (time=1 year default)
    cout << "Simple Interest (default time): " 
         << simpleInterest(p, 7.5) << endl;

    // Case 3: Principal + rate + time provided
    cout << "Simple Interest (all values given): " 
         << simpleInterest(p, 10, 2) << endl;

    return 0;
}
