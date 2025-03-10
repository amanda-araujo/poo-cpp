//
// Created by Amanda on 10/03/2025.
//
#include <iostream>
using namespace std;

class Gradma { // Base class
    public: int age;
    protected: int fortune = 1000000;
};

class Mother: public Gradma { // Derived class
    public:
        int children;
        void setFortune(int f) { // Setter method
            fortune = f;
        }
        int getFortune() { // Getter method
            return fortune;
        }
};

int main () {
    Mother mother;
    mother.children = 3;
    mother.age = 45;
    cout << "Mother children: " << mother.children << endl;
    cout << "Mother age: " << mother.age << endl;
    //mother.fortune = 10; //error: ‘int Gradma::fortune’ is protected within this context

    cout << "Gradma fortune: " << mother.getFortune() << endl;
    mother.setFortune(100);
    cout << "Gradma fortune after mother : " << mother.getFortune() << endl;
    return 0;
}