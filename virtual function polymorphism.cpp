#include <iostream>
    
using namespace std;
    
class A {
public:
    void fun1(){cout << "Fun1 of class 1" << endl;}
    virtual void fun2(){cout << "Fun2 of class A" << endl;}
    void fun3(){cout << "Fun3 of class A" << endl;}
    
    virtual ~A(){cout << "Destructor of class A" << endl;} // virtual to get all 
};

class B: public  A {
public:
    virtual void fun1(){cout << "Fun1 of class B" << endl;}
    void fun2(){cout << "Fun2 of class B" << endl;}
    void fun3(){cout << "Fun3 of class B" << endl;}
    
    ~B(){cout << "Destructor of class B" << endl;}
};

class C : public B{
public:
    void fun1(){cout << "Fun1 of class C" << endl;}
    void fun2(){cout << "Fun2 of class C" << endl;}
    virtual void fun3(){cout << "Fun3 of class C" << endl;}
    
    ~C(){cout << "Destructor of class C" << endl;}
};    
    
void outFun(B & outObj){
    outObj.fun1();
    outObj.fun2();
    outObj.fun3();

}
    
int main(){
    C objC;
    
    outFun(objC);
    
    B * p = new C;
    
    delete p;
    
    return 0;
}