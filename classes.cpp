//
// Created by Amanda on 24/02/2025.
// With a little help from my friends: Buda & Arex :)
//

#include "classes.h"
#include <iostream>
#include <cstring> // :)
using namespace std;

// Create classes
class Treco { // Class
    public:   // Access specifier
        int tam;  // Attributes
        string name;
};

class Coisa { // Class
    public:   // Access specifier
        void coisaMetodo() { // Method
            cout << "Hello World! o/" << "\n";
        }
        void coisaMI6() {
            cout << "Calling all the agents" << "\n";
            coisaPrivado(); // Call inside the object itself
        }
    private:  // Access specifier
        void coisaPrivado() {
            cout << "Secret agent" << "\n";;
        } // Private: can only be accessed by the class itself
};

class Animal {
    public:
        // Atributes
        string sp;
        int size;

        // Methods
        void move() {
            cout << "moving to atack " << "\n";
        }
        void sleep() {
            cout << "sleeping " << "\n";
        }

        void hunting() {
            int n;
            cout << "hunting in action, how many prays there are in sight?" << "\n";
            cin >> n;
            pray += n;
        }

        // Extras
        int pray = 0;
};

class Car {
    public: // Access specifier
        // Attributes
        int cc;   // Car engine (cc)
        int tank; // Capacity (L)
        string name; // Model name
        double price_tank; // Amount to fuel the tank ($)
        int length; // (mm)
        int width;  // (mm)
        int wheelbase; // (mm)
        int n_seats;     // Number of seats
        int n_cylinders; // Number of cylinders
        bool airbag; // Airbag equipped
        bool wheel_covers;

        // Methods
        void moveCar(); // Method declaration
        void fuelCar(double price_fuel) {
            price_tank = tank * price_fuel;
        }
};

// Method definition outside the class
void Car::moveCar() {
    cout << "vrum vrum" << "\n";
    cout << name << " is on the highway with " << cc << " cc" << "\n";
}

int main() {
    Treco marreco; // Object of the class Treco: instantiation

    // Fill the object
    marreco.tam = 10;
    marreco.name = "Marre";

    // Look at the object (instaciation of the class)
    // Print attributes values
    cout << "I'm a beautiful object!" << endl;
    std::cout << marreco.name << "\n";
    std::cout << marreco.tam << "\n";

    Treco recco;
    recco.tam = 20;
    recco.name = "Ecco";
    std::cout << recco.name << "\n";
    std::cout << recco.tam << "\n";

    // Second class
    Coisa coiso;
    coiso.coisaMetodo();
    //coiso.coisaPrivado(); // Error: private method
    coiso.coisaMI6(); // Public using Private

    // Third class
    Animal tiger;
    tiger.sp = "Tigrinho";
    tiger.size = 100;
    cout << "Species: " << tiger.sp << "\n";
    cout << "Size: " << tiger.size << "\n";
    tiger.move();
    tiger.sleep();
    tiger.hunting();
    cout << "Result of the hunting: " << tiger.pray << "\n";
    tiger.hunting();
    cout << "Result of the new hunting: " << tiger.pray << "\n";

    // Fourth class
    Car ferrari; // Instantiation: creation of an object of class Car
    ferrari.name = "Ferrari 488";
    ferrari.cc = 3902;
    ferrari.tank = 78;
    ferrari.length = 4568;
    ferrari.width = 1952;
    ferrari.wheelbase = 2650;
    ferrari.n_cylinders = 4;
    ferrari.airbag = true;
    ferrari.wheel_covers = false;
    ferrari.n_seats = 5;
    ferrari.moveCar();
    double price_fuel;
    cout << "How much does a liter of gas fuel cost?" << "\n";
    cin >> price_fuel;
    ferrari.fuelCar(price_fuel);
    cout << "Amount to fill the " << ferrari.name << "is: " << ferrari.price_tank << " $ \n";

    return 0;
}