//
// Created by Amanda on 10/03/2025.
//
#include <iostream>
using namespace std;

class Blood {
    public:
        int bloodNumber;
        void bloodFlow() {
            cout << "Blood Flow" << endl;
        };
};

class TypeA: public Blood {
    public:
        void bloodFlow() {
            cout << "Blood Flow A" << endl;
        };
};

class TypeB: public Blood {
public:
    void bloodFlow() {
        cout << "Blood Flow B" << endl;
    };
};

class TypeO: public Blood {
public:
    void bloodFlow() {
        cout << "Blood Flow O" << endl;
    };
};

// Base class
class Animal {
public:
    void animalSound() {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig: public Animal {
public:
    void animalSound() {
        cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog: public Animal {
public:
    void animalSound() {
        cout << "The dog says: bow wow \n";
    }
};

int main () {
    Blood blood;
    TypeA typeA;
    TypeB typeB;
    TypeO typeO;
    blood.bloodFlow();
    typeA.bloodFlow();
    typeB.bloodFlow();
    typeO.bloodFlow();

    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}