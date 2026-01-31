#include <iostream>

using namespace std;

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    float cgpa;
    int rno;

public:
    string name;
    string degree;
    string hostel;

    void updateDetails(string s, int r, string d, float cg)
    {
        name = s;
        rno = r;
        degree = d;
        cgpa = cg;
    }

    void addDetails()
    {

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your roll number: ";
        cin >> rno;

        cin.ignore();

        cout << "Enter your degree: ";
        getline(cin, degree);

        cout << "Enter your CGPA: ";
        cin >> cgpa;

        cin.ignore();

        cout << "Enter your hostel name: ";
        getline(cin, hostel);

        cout << endl;
    }

    void updateCgpa(float cg)
    {

        cgpa = cg;
    }

    void updateHostel(string h)
    {
        hostel = h;
    }

    void displaydetails()
    {

        cout << "Name : " << name << endl;
        cout << "Roll no.: " << rno << endl;
        cout << "Degree : " << degree << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Hostel : " << hostel << endl;

        cout << endl;
    }

} s[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        s[i].addDetails();
    }

    for (int i = 0; i < 2; i++)
    {
        s[i].displaydetails();
    }
}
