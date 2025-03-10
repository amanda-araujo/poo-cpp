//
// Created by Amanda on 26/02/2025.
//

#include <iostream>
using namespace std;

// Encapsulation: hiding data >> private members

class Housing {
    private:
        string address; // Attribute private

    public:
        // Methods
        // Setter
        void setAddress(string a) {
            address = a;
        }
        // Getter
        string getAddress() {
            return address;
        }
        string wantAddress() { // Also works as getter method
            return address;
        }
    /*Good practices: use prefixes 'set' and 'get' + private member name*/
};

int main() {
    Housing house;
    house.setAddress("R. Gonçalo Cristóvão");
    cout << house.getAddress() << endl;
    cout << house.wantAddress() << endl;
    return 0;
}


