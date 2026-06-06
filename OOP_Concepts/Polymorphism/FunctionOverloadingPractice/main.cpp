#include <iostream>
using namespace std;

class Radar{
public:
    void scan(int r){
        cout << "Integer range is: "<< r <<endl;
    }
    void scan(double r){
        cout <<"Double range is: "<< r <<endl;
    }
};

int main()
{
    Radar r1;
    r1.scan(300);
    r1.scan(300.9);
    return 0;
}
