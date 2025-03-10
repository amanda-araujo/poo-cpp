//
// Created by Amanda on 10/03/2025.
//

#include <iostream>
using namespace std;

class Physics { // Base class (father)
    public:
        int physics;
        double newton2(double m, double a) {
            return m * a;
        };
        void newton3() {
            cout << "Action and Reaction" << endl;
        };
};

class Mathematics { // Another base class (mother)
    public:
        int math;
        int calculus(int a, int b) {
            return a + b;
        };
};

// Derived class (child)
class Engineering: public Mathematics, public Physics {};

class Chemistry {
    public:
        int chemistry;
};

class Science: public Mathematics, public Physics, public Chemistry {};

int main() {
    Engineering engineer;
    engineer.math = 10;
    engineer.physics = 1000;
    cout << engineer.math + engineer.physics << endl;

    Science science;
    science.math = 1;
    science.physics = 2;
    science.chemistry = 3;
    cout << science.math + science.physics + science.chemistry << endl;
    return 0;
}
