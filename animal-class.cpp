//
// Created by Amanda on 25/02/2025.
//

#include <iostream>
using namespace std;

// Class definition
class Animal {
    public: // Access specifier
        char zone;        // Attribute (type char)
        int size;         // Attribute (type int)
        double weight;    // Attribute (type double)
        bool carnivorous; // Attribute (type bool)
        string sp;        // Attribute (type string)
};

int main() {
    Animal tiger; // Class instantiation

    tiger.zone = 'a';
    tiger.size = 10;
    tiger.weight = 120.5;
    tiger.carnivorous = true;
    tiger.sp = "Bengala Tiger";

    cout << "Zone: " << tiger.zone << '\n';
    cout << "Size: " << tiger.size << '\n';
    cout << "Weight: " << tiger.weight << '\n';
    cout << "Carnivorous: " << tiger.carnivorous << '\n';
    cout << "Species: " << tiger.sp << '\n';
    return 0;
}