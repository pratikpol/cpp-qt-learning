#include <iostream>
using namespace std;

class Atc {
protected:
    int altitude;
    string aircraftType;

public:

    Atc() {
        altitude = 0;
        aircraftType = "Unknown Aircraft";
    }

    void showAltitude() {
        cout << aircraftType << " Altitude is: " << altitude << " feet" << endl;
    }

    void setAltitude(int a) {
        altitude = a;
    }
};

class Helicopter : public Atc {
public:
    Helicopter() {
        aircraftType = "Helicopter";
    }
};

class PassengerPlane : public Atc {
public:
    PassengerPlane() {
        aircraftType = "PassengerPlane";
    }
};

class FighterJet : public Atc {
public:
    FighterJet() {
        aircraftType = "FighterJet";
    }
};

int main()
{
    FighterJet f;
    f.setAltitude(45000);
    f.showAltitude();

    PassengerPlane p;
    p.setAltitude(38000);
    p.showAltitude();

    Helicopter h;
    h.setAltitude(5000);
    h.showAltitude();

    return 0;
}
