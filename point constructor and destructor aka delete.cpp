#include <iostream>

using namespace std;

class point{
public:
    int x, y;
    
    point(int = 3, int = 4);
    ~point();

};

point::point(int a, int b){
    x = a; y = b;
    
    cout << "constructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
}

point::~point(){
    cout << "destructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
}

int main(){
    point * p1 = new point;
    
    cout << p1 -> x << endl;
    
    cout << (*p1).y << endl;
    
    point * p2 = new point(5,8);
    
    delete p1;
    delete p2;
    
    return 0;
}