#include <iostream>

using namespace std;

class Rectangle {

    public:
    float lenght;
    float breadth;

    void getdata () {
     int l,b;
     cout<<"Enter length :";
     cin>>l;

     cout<<"Enter breadth :";
     cin>>b;

     lenght = l;
     breadth = b;

    }

    void calculatearea () {
        cout<<lenght*breadth<<endl;
    }

    void perimeter () {
        cout<<2*(lenght+breadth)<<endl;
    }

};
int main () {
   

Rectangle r1 ;

r1.getdata();
r1.calculatearea();
r1.perimeter();
}