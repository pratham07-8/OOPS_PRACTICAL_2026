#include <iostream>
using namespace std;

// Base class for single inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Single Inheritance: Animal -> Dog
class Dog : virtual public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Classes for multiple inheritance
class Mammal {
public:
    void breathe() {
        cout << "Mammal breathes" << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

// Multiple Inheritance: Mammal, Bird -> Bat
class Bat : public Mammal, public Bird {
public:
    void hang() {
        cout << "Bat hangs upside down" << endl;
    }
};

// Multilevel Inheritance: Animal -> Mammal -> Human
class Human : public Mammal {
public:
    void think() {
        cout << "Human thinks" << endl;
    }
};

// Hierarchical Inheritance: Animal -> Cat, Animal -> Cow
class Cat : virtual public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

class Cow : public Animal {
public:
    void moo() {
        cout << "Cow moos" << endl;
    }
};

// Hybrid Inheritance: Animal -> Dog, Animal -> Cat, Dog,Cat -> Pet
class Pet : public Dog, public Cat {
public:
    void play() {
        cout << "Pet plays" << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\nMultiple Inheritance:" << endl;
    Bat b;
    b.breathe();
    b.fly();
    b.hang();

    cout << "\nMultilevel Inheritance:" << endl;
    Human h;
    h.breathe();
    h.think();

    cout << "\nHierarchical Inheritance:" << endl;
    Cat c;
    c.eat();
    c.meow();

    Cow cow;
    cow.eat();
    cow.moo();

    cout << "\nHybrid Inheritance:" << endl;
    Pet p;
    p.eat();  // From Animal via Dog and Cat
    p.bark(); // From Dog
    p.meow(); // From Cat
    p.play();

    return 0;
}