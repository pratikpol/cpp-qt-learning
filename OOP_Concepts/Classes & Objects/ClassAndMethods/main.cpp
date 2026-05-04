#include <iostream>
using namespace std;

class Aviation{
public:
    void getJob(){      //Method/Function defned inside class
        cout << "Welcome on Board!" << endl;
    }
};

int main()
{
    Aviation a;        //Creates an object of class
    a.getJob();        //Method/Funcrion called
    return 0;
}
