#include <iostream>

using namespace std;

class point {
public:
    int x, y;
    point(int a, int b){
        x = a;
        y = b;
    }
    void print(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class line {
public:
    point start, end;
    line(int a = 0, int b = 0): start(a,b), end(a + 7,b + 7){
        cout << "start point: ";
        start.print();
        
        cout << "end point: ";
        end.print();
    }
};

int main()
{
    line l;
    
    l.start.print();

    return 0;
}