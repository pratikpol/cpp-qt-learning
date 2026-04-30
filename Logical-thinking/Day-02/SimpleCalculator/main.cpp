#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    cout<< "Enter two numbers: ";
    cin>> a>>b;

    cout<< "Enter operator (+,-,*,/)";
    cin>>op;
        if(op == '+')
        cout<< "Result: " << a+b << endl;
    else if(op == '-')
        cout<< "Result: " << a-b << endl;
    else if (op == '*')
        cout<< "Result: " << a*b << endl;
    else if (op == '/')
        cout<< "Result: " << a/b << endl;
    else {
        cout<< "Result is Invalid! " << endl;
    }
    return 0;
}
