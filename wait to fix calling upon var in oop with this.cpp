#include <iostream>

using namespace std;

class A {
  int x;
public:
  void set(int x){
    //x = y; change the second value to a different varaibale
    //A::x = x; - way to fix it 
    //(*this).x = x; different way to write the this command
    this->x = x;
  }  
  void print(){
    cout << (*this).x << endl;
  }
};

int main(){
  A obj;
  obj.set(10);
  obj.print();
  
 return 0;
}