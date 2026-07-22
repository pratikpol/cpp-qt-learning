/*#############################################################
#            Simple fun Prize Generator Program               #
#############################################################*/

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
    case 1: cout << "You win bumper Lottery\n";
        break;
    case 2: cout << "You win t-shirt\n";
        break;
    case 3: cout << "You win free lunch\n";
        break;
    case 4: cout << "You win concert ticket\n";
        break;
    case 5: cout << "You win gift card\n";
        break;

    }
    return 0;
}
