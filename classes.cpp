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
        int tamanho;
        string nome;
};

class Coisa { // Class
    public:
        void coisaMetodo() {
            cout << "Hello World! o/" << "\n";
        }
        void coisaMI6() {
            cout << "Calling all the agents" << "\n";
            coisaPrivado(); // Call inside the object itself
        }
    private:
        void coisaPrivado() {
            cout << "Secret agent" << "\n";;
        }
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

int main() {
    Treco marreco; // Object of the class Treco

    // Fill the object
    marreco.tamanho = 10;
    marreco.nome = "Marre";

    // Look at the object (instaciation of the class)
    // Print attributes values
    cout << "I'm a beautiful object!" << endl;
    std::cout << marreco.nome << "\n";
    std::cout << marreco.tamanho << "\n";

    Treco recco;
    recco.tamanho = 20;
    recco.nome = "Ecco";
    std::cout << recco.nome << "\n";
    std::cout << recco.tamanho << "\n";

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

    return 0;
}