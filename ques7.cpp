#include <iostream>
using namespace std;

namespace SectionA {
    int value = 10;
    void display() {
        cout << "SectionA value = " << value << endl;
    }
}

namespace SectionB {
    int value = 20;
    void display() {
        cout << "SectionB value = " << value << endl;
    }
}


namespace SectionK {
    int value = 30;
    void display() {
        cout << "SectionK value = " << value << endl;
    }
}

int main() {
    cout << SectionA::value << endl;
    cout << SectionB::value << endl;
    cout<< SectionK :: value <<endl;

    SectionA::display();
    SectionB::display();

    return 0;
}
