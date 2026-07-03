#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> aircrafts = {"Airbus", "Boeing", "Lockheed Martin", "Rockwell", "Garmin"};
    aircrafts.push_back("Embraer");
    aircrafts.push_back("Joby Aviation");

    for(string aircraft : aircrafts)
        cout << aircraft << endl;
    return 0;
}
