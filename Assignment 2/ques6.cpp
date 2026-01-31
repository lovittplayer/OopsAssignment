#include <iostream>

using namespace std;

class Student {

    public : 
    void show ();
    static int a;

};

int Student :: a = 100;

void  Student :: show (){
cout<<"Defined out of class";
}

int x = 20;

int main () {

Student s1;
s1.show();

int x = 10;

cout<<"local variable : "<<x<<endl;
cout<<"Global variable : "<<::x<<endl;

cout<<s1.a<<endl;


}