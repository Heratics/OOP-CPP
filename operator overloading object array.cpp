#include <iostream>

using namespace std;

class binary {
public:
    bool values[4];
    binary(int a = 1, int b = 0, int c = 1, int d = 0) {
        values[0] = a;
        values[1] = b;
        values[2] = c;
        values[3] = d;
    }
    binary operator&&(const binary &) const;
    friend binary operator||(const binary &, const binary &);
    void display() const {
        cout << "(" << values[0] << "," << values[1] << "," << values[2] << "," << values[3] << ")" << endl;
    }
};

binary binary::operator&&(const binary &B1) const {
    binary B3;
    for (int i = 0; i < 4; ++i) {
        B3.values[i] = this->values[i] && B1.values[i];
    }
    return B3;
}

binary operator||(const binary &B1, const binary &B2) {
    binary B3;
    for (int i = 0; i < 4; ++i) {
        B3.values[i] = B1.values[i] || B2.values[i];
    }
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
