#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(a<b)
        cout<<"Largest: "<< b << endl;


    else if (a==b)
        cout<<"Numbers are Equal! " << endl;


    else
        cout<<"Largest: "<< a << endl;


    return 0;
}
