#include <iostream>
using namespace std;

class Autopilot{
public:
    void activate(){
        cout <<"Autopilot activated"<<endl;
    }

    void activate(int altitude){
        cout << "Autopilot activated on "<< altitude <<" feet"<<endl;
    }
};

int main()
{
    Autopilot a1;
    a1.activate();
    a1.activate(39000);

    return 0;
}



//Simple example of function overloading.
//Our program has same function name with different parameteres
//Its a compile time polymorphism
