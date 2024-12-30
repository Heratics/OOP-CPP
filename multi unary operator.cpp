#include <iostream>

using namespace std;

class point {
private:
    int x, y;
    
public:
    point(int a = 3, int b = 4) :x {a}, y(b) {}
    void operator-();
    void operator--(); // prefix
    point operator--(int); // postfix
    void display() {cout << "(" << x << "," << y << ")" << endl;}
};

void point::operator-(){
    x = -x;
    y = -y;
}

void point::operator--(){ // prefix
    --x;
    --y;
}

point point::operator--(int){ //postfix
    point temp1 = *this;
    point temp2 = *this;
    --x;
    --y;
    return temp1, temp2;
}

int main(){
    point p1, p2, p3;
    
    -p1;
    p1.display();
    
    --p2;
    p2.display();

    (p3--).display();
    p3.display();
    
    return 0;
}