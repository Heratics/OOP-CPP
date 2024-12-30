#include <iostream>

using namespace std;

class binary {
public: 
    bool one, two, three, four;
    binary(int a = 1, int b = 0, int c = 1, int d = 0): one(a), two(b), three(c), four(d) {}
    binary operator&&(const binary &) const;
    friend binary operator||(const binary &, const binary &);
    void display() const { cout << "(" << one << "," << two << "," << three << "," << four << ")" << endl; }
};

binary binary::operator&&(const binary &B1) const {
    binary B3;  // B3 is temporary var to assign bool value
    B3.one = this->one && B1.one;
    B3.two = this->two && B1.two;
    B3.three = this->three && B1.three;
    B3.four = this->four && B1.four;

    return B3;
}

binary operator||(const binary &B1, const binary &B2) {
    binary B3;
    B3.one = B1.one || B2.one;
    B3.two = B1.two || B2.two;
    B3.three = B1.three || B2.three;
    B3.four = B1.four || B2.four;

    return B3;
}

int main() {
    binary C1(1, 0, 1, 0);
    binary C2(0, 1, 0, 1);

    binary C3 = C1 && C2;
    binary C4 = C1 || C2;

    cout << "C1: ";
    C1.display();

    cout << "C2: ";
    C2.display();

    cout << "C3 (C1 && C2): ";
    C3.display();
    
    cout << "C4 (C1 || C2): ";
    C4.display();

    return 0;
}
