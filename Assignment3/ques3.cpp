#include <iostream>

using namespace std;
class c2;

class c1
{
private:
    int x;

public:
    friend int add(c1 *a, c2 *b);

    c1(int x)
    {
        this->x = x;
    }

    void disp()
    {
        cout << x << endl;
    }
};

class c2
{
private:
    int y;

public:
    friend int add(c1 *a, c2 *b);

    c2(int y)
    {
        this->y = y;
    }

    void disp()
    {
        cout << y << endl;
    }
};

int add(c1 *a, c2 *b)
{
   
    return a->x + b->y;
}

int main()
{

    c1 obj1(10);
    c2 obj2(20);
    // obj1.x = 10
    // obj2.y = 20

    cout<<add(&obj1, &obj2);
}