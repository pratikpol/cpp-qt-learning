#include <iostream>
using namespace std;

class Aviation{
public:
    void getJob();              //Method/Function declaration
};

void Aviation::getJob(){        //Methid/Function defined outside the class
    cout << "Welcome on Board!" << endl;
}

int main()
{
    Aviation a;
    a.getJob();
    return 0;
}
