#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>>n;

    if(n > 0)
        cout<<"Number is Positive" << endl;
    else if (n < 0)
        cout<<"Number is Negative" << endl;
    else
        cout<<"Number is Zero" << endl;

        return 0;
}
