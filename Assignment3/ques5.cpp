#include <iostream>

using namespace std;

class Rectangle {
    int l;
    int b;

    public:
   Rectangle (int l , int b) {
    this->l = l;
    this->b  = b;
   }

   int dispArea () {
      return l*b;
   }


};

int main () {

Rectangle arr [3] = {{10,20},{20,30},{30,40}};


for (int i = 0 ; i<3 ; i++) {
    cout<<"Area of rectangle "<<i+1 <<" is : "<<arr[i].dispArea()<<" unit sq."<<endl;
}

    
}