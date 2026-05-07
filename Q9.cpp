#include <iostream>
using namespace std;

class Engine {
private:
    string type;
    int horsepower;
public:
    Engine(string t, int hp) : type(t), horsepower(hp) {}
    void start() {
        cout << "Engine started: " << type << " with " << horsepower << " HP" << endl;
    }
    void stop() {
        cout << "Engine stopped" << endl;
    }
};

class Car {
private:
    string model;
    Engine engine;  // Composition: Car has an Engine
public:
    Car(string m, string engType, int hp) : model(m), engine(engType, hp) {}
    void drive() {
        cout << "Driving " << model << endl;
        engine.start();
    }
    void park() {
        cout << "Parking " << model << endl;
        engine.stop();
    }
};

int main() {
    Car car("Toyota", "V6", 200);
    car.drive();
    car.park();

    return 0;
}