#include <iostream>
using namespace std;

class Plane{
public:
    string brand;
    string model;
    int year;
    Plane(string x, string y, int z); // Parameterized Constructor
};

Plane::Plane(string x, string y, int z) {
    brand = x;
    model = y;
    year  = z;
}

int main()
{
    Plane p1("Airbus", "A - 350", 2013);
    Plane p2("Boeing", "787", 2011);

    cout << p1.brand <<" " << p1.model << " "<<p1.year<<endl;
    cout << p2.brand <<" " << p2.model << " "<<p2.year<<endl;
    return 0;
}
