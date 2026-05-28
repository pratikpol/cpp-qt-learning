#include <iostream>
using namespace std;

class Altimeter
{
private:
    int altitude;

public:
    Altimeter()
    {
        altitude = 0;
    }

    void setAltitude(int a)
    {
        if(a >=0 && a <=45000)
        {
            altitude = a;
        }
    }

    int getAltitude()
    {
        return altitude;
    }
};

int main()
{
    Altimeter a1;

    a1.setAltitude(35000);
    cout << "Aircraft Altitude: "<< a1.getAltitude()<<" Feet"<<endl;

    return 0;
}
