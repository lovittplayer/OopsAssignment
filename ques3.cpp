#include <iostream>
using namespace std;

class Student
{

public:
    void Marks(int m)
    {
        setMarks(m);
    }

    void disp()
    {
        cout << marks;
    }

private:
    int marks;
    void setMarks(int m)
    {
        marks = m;
    }
};

int main()
{

    Student s1;
    s1.Marks(10);
    s1.disp();
}