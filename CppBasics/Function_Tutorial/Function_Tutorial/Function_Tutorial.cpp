
#include <iostream>
using namespace std;

void myFunction(string aircraft_name) {
    cout << "Airbus " << aircraft_name << endl;
}

int main()
{
    myFunction("A320");
    myFunction("A350");
    myFunction("A380");
    return 0;
}
