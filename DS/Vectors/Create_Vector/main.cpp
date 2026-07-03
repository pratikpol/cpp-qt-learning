#include <iostream>
#include <vector>
using namespace std;

int main()
{
//Syntax:- vector<type> vectorName
    vector<string> aircrafts = {"Airbus", "Boeing", "Lockheed Martin", "Rockwell", "Garmin"};

    //Print vector elements
    for (string aircraft : aircrafts ){
    cout << aircraft << endl;
    }
}
