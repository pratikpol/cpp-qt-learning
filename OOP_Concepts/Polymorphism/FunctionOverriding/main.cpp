#include<iostream>
using namespace std;

class Aircraft{
public:
    void startEngine(){
        cout << "Generic Aircraft Engine Start "<< endl;
    }
};

class FighterJet : public Aircraft
{
public:
    void startEngine(){
        cout << "Afterburner Ignition Start " << endl;
    }
};
int main()
{
     FighterJet j1;
     j1.startEngine();
     return 0;
}
