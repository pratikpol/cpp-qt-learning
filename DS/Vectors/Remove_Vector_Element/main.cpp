#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> aircrafts = {"Airbus", "Boeing", "Lockheed Martin", "Rockwell", "Garmin"};
    aircrafts.pop_back();  //Removes last element

    //Printing an elements
    for(string aircraft : aircrafts){
        cout << aircraft << endl;
    }
}
