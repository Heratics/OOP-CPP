#include <iostream>

using namespace std;

Class A{
private:
    int x;
public:
    int y;
    void set(int a, int b, int c) {x = a; y = b; z = c;}
    void classFun(){ cout << x << " " << y << " " << z << endl;}

    friend void friendFun(A);
protected:
    int z;
};

void friendFun(A outObj)
{ cout << outObj.x << " "<< outObj.y << " "<< outObj.z << endl; }

void Fun(A outObj)
{ cout << outObj.x << " " << outObj.y << " " << outObj.z << endl; }

int main(){
    A objA;
    objA.set(3,5,8);
    objA.classFun();
    friendFun(objA);
    
    return 0;
}
