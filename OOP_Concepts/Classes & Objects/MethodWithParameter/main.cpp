#include <iostream>
using namespace std;

class Aviation {
    public:
    int speed(int maxSpeed);
};

int Aviation::speed(int maxSpeed) {
return maxSpeed;
}
int main()
{
    Aviation a;
    a.speed(900);
    cout << "Speed of A-380 is "<< a.speed(550)<< " knots"<< endl;
    return 0;
}
