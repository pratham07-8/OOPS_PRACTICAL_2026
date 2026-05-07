#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual double area() = 0;  // Another pure virtual
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
    double area() override {
        return length * width;
    }
};

int main() {
    Shape *s1 = new Circle(5.0);
    Shape *s2 = new Rectangle(4.0, 6.0);

    s1->draw();
    cout << "Area: " << s1->area() << endl;

    s2->draw();
    cout << "Area: " << s2->area() << endl;

    delete s1;
    delete s2;

    return 0;
}