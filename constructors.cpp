//
// Created by Amanda on 25/02/2025.
//

#include <iostream>

using namespace std;

// Create classes
/* // Constructor
        // special method called when an object of a class is created
        // always same name as the class, always public, don't have return value
        */

class Toy { // The class
    public: // Access specifier
        Toy() { // Constructor
            cout << "Toy Story" << endl;
        }
};

class Car { // The class
    public: // Access specifier
        string brand; // Attribute
        string model; // Attribute
        int year;     // Attribute

        Car(string x, string y, int z) { // Constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
};

class Food { // The class
    public: // Access specifier
        string name; // Attribute
        bool tasty;  // Attribute
        int stars; // Attribute
        string status; // Attribute
        Food(string in_name, bool in_tasty, int in_stars); // Constructor declaration

        // Methods
        void avaliation() {
            cout << "Food " << name << " avaliation (stars from 1 to 5):" << endl;
            cin >> stars;
        }
        void status_def() {
            if (tasty and stars >= 3) {
                switch (stars) {
                    case 1:
                        status = "Bad";
                        break;
                    case 2:
                        status = "Good";
                        break;
                    case 3:
                        status = "Very good";
                        break;
                    case 4:
                        status = "Great";
                        break;
                    case 5:
                        status = "Excellent";
                        break;
                    default:
                        break;
                }
            }
            //else if (stars == 0) status = "Not rated yet";
            else status = "Not recommended";
        }
};

// Constructor definition outside the class
Food::Food(string in_name, bool in_tasty, int in_stars) {
    name = in_name;
    tasty = in_tasty;
    stars = in_stars;
    status = "Not rated yet";
}


int main() {
    // Object creation of class Toy, call constructor
    Toy barbie;

    // Create Car objects and call constructor with different values
    Car car1("Fiat Uno", "Mille", 1983);
    Car car2("Ford", "Mustang", 1969);
    //Car uno; // Error: default constructor is missing

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;

    // Create Food objects and call construction
    Food food1("Pão de queijo", true, 5);
    Food food2("Pastel de nata", true, 0);
    Food food3("Sauerkraut", false, 0);

    cout << food1.name << " Stars: " << food1.stars << " " << food1.status << endl;
    cout << food2.name << " Stars: " << food2.stars << " " << food2.status << endl;
    cout << food3.name << " Stars: " << food3.stars << " " << food3.status << endl;

    food1.avaliation();
    food1.status_def();
    cout << food1.name << " Stars: " << food1.stars << " " << food1.status << endl;

    food2.avaliation();
    food2.status_def();
    food3.avaliation();
    food3.status_def();

    cout << food1.name << " Stars: " << food1.stars << " " << food1.status << endl;
    cout << food2.name << " Stars: " << food2.stars << " " << food2.status << endl;
    cout << food3.name << " Stars: " << food3.stars << " " << food3.status << endl;

    return 0;
}