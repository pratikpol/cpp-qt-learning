//Multilevel Inheritance

#include <iostream>
using namespace std;

class Aircraft{     //Base class
public:
    string company;

    void showCompany(){
        cout<<"Air India"<<endl;
    }
};

class AircraftType : public Aircraft{           //Derived class (child)
public:
    string type;

    void getType(){
        cout <<"Enter type of the Aircraft: "<<endl;
        cin>> type;
    }

    void showType(){
        cout << "Type of the Aircraft: "<< type<< endl;
    }
};

class Passenger: public AircraftType            //Derived class (Grand-child)
{
public:
    int noOfPassengers;

    void getCount(){
        cout <<"Enter total no of passengers onboard: "<<endl;
        cin>> noOfPassengers;
    }

    void showCount(){
        cout << "Total Passenger: "<< noOfPassengers<< endl;
    }
};


int main()
{
    Passenger p;
    p.getType();
    p.getCount();
    p.showCompany();
    p.showType();
    p.showCount();

    return 0;
}
