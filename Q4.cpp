#include <iostream>
using namespace std;

class Demo {
private:
    int x, y;
public:
    // Default constructor
    Demo() {
        x = 0;
        y = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Demo(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Demo(const Demo &obj) {
        x = obj.x;
        y = obj.y;
        cout << "Copy constructor called" << endl;
    }

    // Overloaded constructor (another parameterized)
    Demo(int a) {
        x = a;
        y = a * 2;
        cout << "Overloaded constructor called" << endl;
    }

    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    // Default constructor
    Demo d1;
    d1.display();

    // Parameterized constructor
    Demo d2(10, 20);
    d2.display();

    // Copy constructor
    Demo d3 = d2;
    d3.display();

    // Overloaded constructor
    Demo d4(5);
    d4.display();

    // Dynamic initialization
    cout << "Dynamic initialization:" << endl;
    Demo *d5 = new Demo(15, 25);
    d5->display();
    delete d5;

    return 0;
}
