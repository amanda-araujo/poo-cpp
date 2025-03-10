//
// Created by Amanda on 26/02/2025.
//

#include <iostream>
using namespace std;

// Defining classes
// Base class
class UPStudent {
    private: // Access specifier
        int personal; // Attribute

    public: // Access specifier
        string name;   // Attribute
        int UPnum;
        UPStudent() { // Constructor
            std::cout << "UP student" << endl;
        }
        void party() { // Method
            cout << "Queima de fitas! \n";
        }
        void setPersonal(int p) {
            personal = p;
        }
        int getPersonal() {
            return personal;
        }
};

// Derived class
class FEUPStudent: public UPStudent{ // New class, takes the previous
    public:
        string engineering;
        FEUPStudent() {
            std::cout << "FEUP student" << endl;
        }
        void engineer() {
            int tool = 3 * getPersonal();
            cout << "Engineering with tool " << tool << endl;
        }
};

class FCUPStudent: public UPStudent{};

// Multilevel inheritance: class derived from a class, derived from a class
class AEFEUPStudent: public FEUPStudent {
    public:
        int AEFEUPnum;
        AEFEUPStudent() { // Construct
            std::cout << "AEFEUP Student" << endl;
        };
};

class USPStudent {
    public:
        int USPnum;
};

class ICMCStudent: public USPStudent{
    public:
        ICMCStudent() {
            cout << "ICMC student: 'Raça CAASO' " << endl;
        }
};

// Multiple Inheritance
class ERASMUSStudent: public FEUPStudent, public ICMCStudent {};

//

int main() {
    FEUPStudent student;         // Object instantiation derived class
    student.name = "João";       // Attribute from base class
    student.engineering = "EIC"; // Attribute from derived class
    student.party();             // Method from base class
    cout << student.name + " " + student.engineering << endl;

    // Accessing private attributes from base class
    student.setPersonal(10);             // Setter method from base class
    cout << student.getPersonal() << "\n"; // Getter method from base class
    student.engineer(); // Method from derived class, uses getter from base class

    // Multilevel Inheritance
    AEFEUPStudent student2;
    student2.setPersonal(20);
    student2.engineer();

    FCUPStudent student3;
    student3.name = "Maria";
    cout << student3.name << endl;

    // Multiple Inheritance
    cout << "Multiple Inheritance" << endl;
    ERASMUSStudent student4;
    student4.name = "Amanda";
    student4.USPnum = 10260441;
    student4.UPnum = 202411286;
    cout << student4.name + " Nº USP: " << student4.USPnum << " Nº UP: " << student4.UPnum << endl;
    return 0;
}