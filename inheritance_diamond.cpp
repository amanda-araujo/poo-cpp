//
// Created by Amanda on 10/03/2025.
//

#include <iostream>
using namespace std;

class Animal {
    public:
        string name;
        int weight;
};

// The Diamond Problem: repeated inheritance
// class Mammal: public Animal {
//     public: int age;
// };
//
// class Flying: public Animal {
//     public: int velocity;
// };
class Mammal: virtual public Animal {  // Use virtual inheritance
    public: int age;
};

class Flying: virtual public Animal {  // Use virtual inheritance
    public: int velocity;
};

class Bat: public Mammal, public Flying {};

int main () {
    Bat batman;
    batman.age = 40;
    batman.velocity = 100;
    batman.name = "Bruce"; // No ambiguity, single instance of Animal
    batman.weight = 20;    // Also no ambiguity

    cout << "Bat Name: " << batman.name << endl;
    cout << "Bat Weight: " << batman.weight << endl;
    cout << "Bat Age: " << batman.age << endl;
    cout << "Bat Velocity: " << batman.velocity << endl;
    return 0;
}