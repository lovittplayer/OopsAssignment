#include <iostream>

using namespace std;
class Rectangle
{
private:
    float l;
    float b;

public:
    // Constructor with no pArameter
    Rectangle()
    {
        this->l = l;
        this->b = b;
        cout << "Constructor called\n";
    }

    // Constructor for square
    Rectangle(float a)
    {
        l = b = a;
        cout << "Square constructor called\n";
    }

    // contrcutor with 2 varibaless
    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }

    // area CalCulation
    float area()
    {
        return l * b;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called\n";
    }
};

int main()
{

    int *n = new int(10);
    float *x = new float(11.3);
    int *arr = new int[10];
    float *arr2 = new float[10];

    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle[10];
}