#include <iostream>

using namespace std;

int main()
{
    string city = "New York";
    string &destination = city;

    destination = "San Francisco";

    cout << city << endl;
    cout << destination << endl;
    return 0;
}
