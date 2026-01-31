// complex number wala question 

#include <iostream>

using namespace std;

class Complex {
    public : 
    float real;
    float imaginary;

void setComplex(float r , float i) {
    real = r;
     imaginary = i;
}
void display (){
    cout<<real<<" + "<<imaginary<<"i"<<endl;
}


};

Complex Add (Complex c1, Complex c2) {
    
    c1.real = c1.real + c2.real;
    c1.imaginary = c1.imaginary + c2.imaginary;
    return c1;
}
int main () {

    Complex c1;
    c1.setComplex(10,4);
    c1.display();

    Complex c2;
    c2.setComplex(13,4);
    c2.display();


    Complex c3 = Add(c1,c2);

    c3.display();


}