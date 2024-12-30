#include <iostream>

using namespace std;

class A{
private:
    int x,y;
public:
   // A(int);
    A(int, int = 0);
    
void print(){
    cout << "(" << x << "," << y << ")";  
    }
};

/*
A::A(int a){
    x = a;
}
*/

A::A (int a, int b) {
    x = a;
    y = b;
}

int main(){
    A obj(3);
    obj.print();

 return 0;
}