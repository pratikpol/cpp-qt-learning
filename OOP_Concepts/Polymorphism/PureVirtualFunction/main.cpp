#include <iostream>
using namespace std;

class Shape{              //Abstract Base Class
protected:
    float d1,d2;

public:
    void getDim(){
        cin >> d1>>d2;
    }
    virtual float area() = 0;
};

class Triangle: public Shape{
public:
    virtual float area(){
        return 0.5 * d1 * d2;
    }
};

class Rectangle : public Shape{
public:
    virtual float area(){
        return d1 * d2;
    }
};

int main()
{
    Triangle t;
    cout << "Enter triangle's Base and Height" << endl;
    t.getDim();
    cout << "Area = " << t.area() << endl;

    Rectangle r;
    cout << "Enter rectangle's Length and Breadth" << endl;
    r.getDim();
    cout << "Area = " << r.area() << endl;
}
