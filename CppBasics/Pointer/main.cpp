#include <iostream>

using namespace std;

int main()
{
    string Airbus = "Toulouse";
    string* ptr = &Airbus;

    cout << Airbus << "\n";   //Output the value of Airbus

    cout << &Airbus << "\n";  //Output the memory address of Airbus

    cout << ptr << "\n";      //Output the memory address with pointer

    cout << *ptr << "\n";     //Output the value with pointer
    return 0;
}
