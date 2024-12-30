#include <iostream>

using namespace std;

class point
{
private:
    int x, y;
public:
    point(int a = 1, int b = 1) : x(a), y(b) {}
    friend void operator-(point &p); // negative
    friend void operator--(point &p);// prefix decrement
    friend point operator--(point &p, int);// postfix decrement
    void display() { cout << "(" << x << "," << y << ")" << endl; }
};

void operator-(point &p) {
    p.x = -p.x;
    p.y = -p.y;
}

void operator--(point &p) {
    --p.x;
    --p.y;
}

point operator--(point &p, int) {
    point temp = p;
    --p.x;
    --p.y;
    return temp;
}

int main()
{
    int i,i2;
    cout << "Enter x value for point: ";
    cin  >> i;
    cout << "Enter y value for point: ";
    cin  >> i2;

    point p(i, i2);

    cout << "Original point: ";
    p.display();

    cout << "Negative form: ";
    -p;
    p.display();

    cout << "Prefix Decrement: ";
    --p;
    p.display();

    cout << "The point before postfix: ";
    (p--).display();
    cout << "The point after postfix: ";
    p.display();

    return 0;
}
