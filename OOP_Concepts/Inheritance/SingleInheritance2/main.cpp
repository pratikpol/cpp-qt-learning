#include<iostream>
using namespace std;

class Aircraft {
public:
    int altitude;

    void getAltitude() {
        cout << "Enter Altitude: " << endl;
        cin >> altitude;
    }
    void showAltitude() {
        cout << "Aircraft is at " << altitude << " feet" << endl;
    }

};

class PassengerPlane :public Aircraft {
public:
    int no_of_passangers;

    void getdata() {
        cout << "Enter total no of passangers in plane: " << endl;
        cin >> no_of_passangers;
    }
    void showdata() {
        cout << "Total no of passanger in the plane: " << no_of_passangers << endl;
    }
};
int main() {
    PassengerPlane p;
    p.getdata();
    p.getAltitude();
    p.showdata();
    p.showAltitude();

    return 0;

}
