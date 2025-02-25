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

    return 0;
}