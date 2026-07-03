#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> aircrafts = {"Airbus", "Boeing", "Lockheed Martin", "Rockwell", "Garmin"};

    //Gets the first element
    cout <<aircrafts [0] <<"\n";   //Output Airbus

    //Gets fourth element
    cout <<aircrafts [3] <<"\n";   //Output Rockwell

    return 0;
}
