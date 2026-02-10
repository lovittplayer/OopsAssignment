#include <iostream>

using namespace std;

class base {
  
public:
    // a) it should start with ~tilde sign otherwise  it will become constrcuctor
    ~base(){
      cout<<"The working destructor"<<endl;
    };

    // b) again error there cannot be 2 destructors 
    // ~base () {

    // };

//c)  error there cannot be any parameter involved in destrcutor
    // ~base (int x) {

    // };

//d error because there in no return type of destructor 
 // int ~base (int x) {
           //return x;
    // };



};




int main () {

 base b;
}