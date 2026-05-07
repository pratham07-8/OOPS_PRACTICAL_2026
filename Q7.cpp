#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape *s;

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();  // Runtime polymorphism

    s = &r;
    s->draw();  // Runtime polymorphism

    return 0;
}