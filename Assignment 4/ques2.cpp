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
     Rectangle(float l,float b)
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
    // Array 
    Rectangle arr[3] = {
        Rectangle(),        // default constructor
        Rectangle(5, 4),    // parameterized constructor
        Rectangle(3)        // square constructor
 };

 
    for (int i = 0; i < 3; i++)
    {
        cout << "Area of rectangle " << i + 1 << " = " << arr[i].area() << endl;
    }

    return 0;
}
