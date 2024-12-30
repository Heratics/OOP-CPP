#include <iostream>

using namespace std;

class point{
public:
    int x, y;
    int * p;
    
    point(int a = 3, int b = 4, int c = 5){
        x = a;
        y = b;
        p = new int{c};
    }
    
    point(const point & d){
        x = d.x;
        y = d.y;
        p = new int;
        *p = *(d.p);
    }
    
    ~point(){
        cout << "destructor " << endl;
    }

    void print(){
        cout << x << " " << y << " " << *p << endl;
    }
};

int main(){
    point p1(7,8,9);
    point p2 = p1;
    
    p1.print();
    p2.print();
    
    cout << (p1.p) << endl;
    cout << (p2.p) << endl;
    
return 0;
}