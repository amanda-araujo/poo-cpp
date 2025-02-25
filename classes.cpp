//
// Created by Amanda on 24/02/2025.
//

#include "classes.h"
#include <iostream>
#include <cstring>
using namespace std;

// Create class
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
            cout << "Secret agent";
        }
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

    return 0;
}