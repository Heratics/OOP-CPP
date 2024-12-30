#include <iostream>

using namespace std;

class negationNum {
    int one;
public:
    negationNum(int one1) : one(one1) {}

    void print() const {
        cout << "here is the negative form: " << one << endl;
    }

    void operator-() {
        one = -one;
    }

};

int main() {
    int i;
    cout << "Enter the number to negate: ";
    cin  >> i;
    
    negationNum var(i);
    -var;
    var.print();

    return 0;
}
