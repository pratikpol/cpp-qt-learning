#include <iostream>
using namespace std;

class Player{
public:
    Player()   //Constructor
    {
        cout <<"Player Spwaned " << endl;
    }

    ~Player()
    {
        cout <<"Player Destroyed " <<endl;  //Destructor
    }
};

int main()
{
    Player p;
}
