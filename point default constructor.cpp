#include <iostream>

using namespace std;

class point{
  private:
    int x,y;
    
  public:
    void print(){
      cout << "(" << x << "," << y << ")" << endl;
    }
  point(int = 0, int y = 0);
};

point::point(int x, int y){
    this-> x = x;
    this-> y = y;
}

int main(){
    int i,k;
    
    cout << "enter values :";
    cin  >> i >> k;
    
    point p1(i,k);
    p1.print();

  return 0;
}
