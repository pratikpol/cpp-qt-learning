#include <iostream>
using namespace std;

class Aircraft{
public:
    virtual void fly(){
        cout << "Aircraft is taking-off" << endl;
    }
};

class Helicopter : public Aircraft{
public:
    void fly() override {
        cout << "Rotor blade making noise" << endl;
    }
};

int main()
{
    Aircraft *a;     //Declared pointer to the base class
    Helicopter h1;   //Created an object of derived class
    a = &h1;         //Points the base class pointer to the object of child class
    a->fly();        //Calls the fly() function using pointer. As we mentioned "virtual" so it will call Helicopter version
    return 0;
}
