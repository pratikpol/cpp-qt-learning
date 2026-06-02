#include <iostream>
using namespace std;

class EngineSystem{
public:
    string e;

    void getInput(){
        cout << "Press E to start the engine: "<<endl;
        cin>>e;
    }
    void showInput(){
        if(e == "E" || e == "e"){
            cout<<"Engine started"<<endl;
        }
        else{
            cout<<"Invalid Engine Command"<<endl;
        }
    }
};

class NavigationSystem{
public:
    string s;

    void getCourse(){
        cout<<"Press S to set course or navigation path: "<<endl;
        cin>>s;
    }
    void showCourse(){
        if(s == "S" || s == "s"){
            cout<<"Naviagtion Path Set"<<endl;
        }
        else{
            cout << "Invalid Navigation Command"<<endl;
        }
    }
};

class Aircraft: public EngineSystem,
                public NavigationSystem{
public:
    void prepareForFlight(){
        cout<<"Aircraft Ready for Departure"<<endl;
    }

};

int main()
{
    Aircraft a;
    a.getInput();
    a.getCourse();
    a.showInput();
    a.showCourse();
    a.prepareForFlight();
    return 0;
}
