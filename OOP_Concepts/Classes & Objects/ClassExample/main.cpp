#include <iostream>
#include <string>
using namespace std;

class Aircraft {
public:
    string aircraftName;
    int airceaftNo;
    };

int main()
{

    Aircraft a;  // Created an first object of class
    Aircraft b;  // Created an second object of class

    a.aircraftName = "Airbus";
    a.airceaftNo = 380;

    b.aircraftName = "Boeing";
    b.airceaftNo = 747;

    cout << a.aircraftName << " " << a.airceaftNo << endl;
    cout << b.aircraftName << " " << b.airceaftNo << endl;

    return 0;
}
