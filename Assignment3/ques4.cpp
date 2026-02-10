#include <iostream>

using namespace std;



class a {
private:
int y;
int x;
    public : 
    a (int x,int y) {
        this->x = x;
        this ->y = y;
    }
    friend class b;

};

class b {
int s;
    public:
  int min (a obj1);
};

int b :: min (a obj1) {
    return  obj1.x < obj1.y ? obj1.x : obj1.y;
}


int main () {

    
 a obj1 (11,22);

 b obj2;
 cout<<obj2.min(obj1);

}