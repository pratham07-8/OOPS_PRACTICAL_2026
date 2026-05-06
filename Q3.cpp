#include <iostream>
using namespace std;

// Function overloading for Sum
int calculate(int a, int b) {                 // Sum of integers
    return a + b;
}
double calculate(double a, double b) {        // Sum of doubles
    return a + b;
}

// Function overloading for Area
double calculate(double radius, bool isCircle) {   // Circle area
    return 3.14 * radius * radius;
}
int calculate(int length, int breadth, bool isRectangle) { // Rectangle area
    return length * breadth;
}

// Function overloading for Volume
int calculate(int side, char type) {          // Cube volume
    return side * side * side;
}
double calculate(double radius, double height, char type) { // Cylinder volume
    return 3.14 * radius * radius * height;
}

int main() {
    // Sum
    cout << "Sum (int): " << calculate(5, 10) << endl;
    cout << "Sum (double): " << calculate(5.5, 4.5) << endl;

    // Area
    cout << "Area of Circle (r=7): " << calculate(7.0, true) << endl;
    cout << "Area of Rectangle (5x8): " << calculate(5, 8, true) << endl;

    // Volume
    cout << "Volume of Cube (side=4): " << calculate(4, 'c') << endl;
    cout << "Volume of Cylinder (r=3, h=10): " << calculate(3.0, 10.0, 'v') << endl;

    return 0;
}
