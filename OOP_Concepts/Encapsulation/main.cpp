#include <iostream>
using namespace std;

class FuelTank
{
private:
    int fuelLevel;

public:
    void setFuelLevel(int f)
    {
        if (f >=0 & f <=5000)
            fuelLevel = f;
    }
    int getFuelLevel()
    {
        return fuelLevel;
    }
};

int main()
{
    FuelTank f1;

    f1.setFuelLevel(3000);
    cout << "Current fuel of Aircraft is: "<<f1.getFuelLevel()<<endl;

    return 0;
}
