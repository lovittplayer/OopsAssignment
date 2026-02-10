#include <iostream>

using namespace std;

inline int cube (int x) {
    return x*x*x;
}



int main () {


    int x;
    cout<<"Enter a number : "<<endl;
    cin>>x;

    cout<<cube(x);
}