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
        cout << marks << endl;
    }

private:
    int marks;
    void setMarks(int marks)
    {
        this->marks = marks;
    }
};

int main()
{

    Student s1;
    s1.Marks(10);
    s1.disp();

    Student *ptr = &s1;

    (*ptr).disp();
    ptr->disp();
}