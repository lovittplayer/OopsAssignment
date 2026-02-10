#include <iostream>

using namespace std;

class base
{

public:
    int x;
    int y;

    base(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void disp()
    {
        cout << "x = " << x << "," << " y = " << y << endl;
    }
};

base addbyValue(base obj)
{
    obj.x = 2 * obj.x;
    obj.y = 2 * obj.y;

    return obj;
}

base addbyRefer(base &obj)
{
    obj.x = 2 * obj.x;
    obj.y = 2 * obj.y;

    return obj;
}
int main()
{

    base obj1(10, 20);

    base obj2 = addbyValue(obj1);
    obj1.disp(); // 10 20
    base obj3 = addbyRefer(obj1);

    obj1.disp(); // 20 40
    obj2.disp(); // 20 40
    obj3.disp(); // 20 40
}