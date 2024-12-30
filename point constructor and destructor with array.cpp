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
    
    //cout << "constructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
}

point::~point(){
    //cout << "destructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
}

int main(){
    point * p1 = new point;
    
    point * p2 = new point(5,8);
    
    point p3;
    
    point * p = new point[3]{ point(7,9), point(6,7), p3};
    
    for (int i = 0; i < 3; i++){
        cout << (p+i)->y << " ";
    }
    
    delete p1;
    delete p2;
    delete []p;
    
    return 0;
}