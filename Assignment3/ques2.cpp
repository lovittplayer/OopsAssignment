#include <iostream>

using namespace std;
class c2;

class c1
{
private:
    int x;

public:
    friend void swap(c1 *a, c2 *b);

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
    friend void swap(c1 *a, c2 *b);

    c2(int y)
    {
        this->y = y;
    }

    void disp()
    {
        cout << y << endl;
    }
};

void swap(c1 *a, c2 *b)
{
    int temp = a->x;
    a->x = b->y;
    b->y = temp;
}

int main()
{

    c1 obj1(10);
    c2 obj2(20);
    // obj1.x = 10
    // obj2.y = 20

    swap(&obj1, &obj2);

    obj1.disp(); // 20
    obj2.disp(); // 10
}