//Example of Single Level Inheritance with public data and data members

#include <iostream>
using namespace std;

class Aircraft{           //Base class
public:
    int speed;

    void getspeed(){
        cout <<"Enter speed: "<<endl;
        cin >> speed;
    }
    void showspeed(){
        cout<< "Aircraft's speed is " <<speed <<" knots"<<endl;
    }
};

class FighterJet:public Aircraft{     //Derived class
public:
    void activateWeapons(){
        cout<<"Weapons Activated! "<<endl;
    }
};

int main()
{
    FighterJet f;
    f.getspeed();
    f.showspeed();
    f.activateWeapons();
    return 0;
}
