#include <iostream>

using namespace std;

class Rectangle
{

private:
    float l;
    float b;

public:
    Rectangle()
    {
        l = b = 0;
    }

    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }

    Rectangle(float a)
    {
        l = b = a;
    }
    float area()
    {
        return l * b;
    }
};

int main()
{

    Rectangle r1;
    Rectangle r2(11.2);
    Rectangle r3(12, 13.2);

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}