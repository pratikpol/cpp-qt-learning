#include <iostream>
using namespace std;

class Aircraft{
public:
    void showWarning(){
        cout << "Landing Gear Stuck\n";
    }
};

class FighterJet : public Aircraft{
public:
    void showWarning(){
        cout <<"Missile Warning Activated\n";
    }
};

int main()
{
    FighterJet f1;
    f1.showWarning();
    return 0;
}
