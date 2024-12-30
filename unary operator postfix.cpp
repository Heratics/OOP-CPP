#include <iostream>

using namespace std;

class unary {
    int x;
public:
    unary(int a) : x(a) {}
    void display(){cout << x << endl;}
    unary operator--(int);
};

unary unary::operator--(int) {
    unary temp = *this;
    --x;
    return temp;
}

int main(){
    unary un(5);
    cout << (un--).display() << endl;
    un.display();

    return 0;
}