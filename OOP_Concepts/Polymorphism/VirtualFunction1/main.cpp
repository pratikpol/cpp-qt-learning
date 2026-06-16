#include <iostream>
using namespace std;

class Aircraft{
public:
    virtual void landingGear(){
        cout << "Landing Gear Deployed " << endl;
    }
};

class Helicopter : public Aircraft {
public:
    void landingGear() override {
        cout << "Skidrow Landing System Ready " << endl;
    }
};

int main()
{
     Helicopter h1;
     h1.landingGear();
     return 0;
}

// Above example is not true runtime polymorphism we can say its an example of function overriding
// Checkout VirtualFunction2 example for runtime polymorphism.
