#include <iostream>

using namespace std;

int main()
{
    string Airbus = "Toulouse";
    string* ptr = &Airbus;

    cout << Airbus << "\n";   //Output the value of Airbus (Toulouse)

    cout << &Airbus << "\n";  //Output the memory address of Airbus (0x48aa1ffd80)

    cout << ptr << "\n";      //Output the memory address with pointer (0x48aa1ffd80)

    cout << *ptr << "\n";     //Output the value with pointer (Toulouse)
    return 0;
}
