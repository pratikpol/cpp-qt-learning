#include <iostream>
using namespace std;

class Plane{
public:
    string brand;
    string model;
    int year;
    Plane(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    Plane planeObj1("Airbus", "A-350", 2013);
    Plane planeObj2("Boeing", "787", 2011);

    cout << planeObj1.brand <<" " << planeObj1.model <<" " << planeObj1.year<< endl;
    cout << planeObj2.brand <<" " << planeObj2.model <<" " << planeObj2.year<<endl;

    return 0;
}
