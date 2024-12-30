#include <iostream>

using namespace std;

class binary{
public:
    bool one, two;
    binary(bool a = true, bool b = true): one(a), two(b) {}
    binary operator&&(binary &);
    friend binary operator||(binary &, binary &);
    void display(){ cout << "(" << one << "," << two << ")" << endl; } 
};

binary binary::operator&& (binary & B1){
    binary B3;
    B3.one = this->one && B1.one;
    B3.two = this->two && B1.two;
    
    return B3;
}

binary operator||(binary & B1, binary & B2){
    binary B3;
    B3.one = B1.one || B2.one;
    B3.two = B1.two || B2.two;
    
    return B3;
}

void operator!(binary & B1){
    B1.one = !B1.one;
    B1.two = !B1.two;
    
}

int main(){
    binary C1(true, true);
    binary C2(false, true);
    
    binary C3 = C1 && C2;
    C3.display();
    
    C3 = C1 || C2;
    C3.display();

    !C2;
    C2.display();
    
    //solve what B1&&true means and what it is
    
    return 0;
}