#include <iostream>

using namespace std;

class A {
public:
    virtual void print () {
        cout << "print A" << endl;
    }
};

class B : public A {
public:
    void print() {
        cout << "print B" << endl;
    }
};
    // note that the virtual affect only works when a pointer or a refference is present int the code
void test(A & p) { 
    p.print();
}

int main(){
    B b;
    test(b);
    
    A a;
    test(a);

    return 0;
}