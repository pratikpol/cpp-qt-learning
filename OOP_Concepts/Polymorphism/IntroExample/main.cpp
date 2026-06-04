#include <iostream>
using namespace std;

class Aircraft{
public:
    string type;

    Aircraft(){
        cout << "non-parameterized constructor"<<endl;
    }

    Aircraft(string type){
        this->type = type;
        cout <<"parameterized constructor"<<endl;
    }

};

int main()
{
    Aircraft a;  //It will call non-parameterized constructor

    return 0;
}



//Its an example of constructor overloading, where constructor shared same name but different parameters and operations
//Poly means many or multiple
//Morph means forms or shapes
