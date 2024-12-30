#include <iostream>

using namespace std;

class point {
  int x, y;
public: 

  point(){
    x = 2;
    y = 3;
  }

  point(int v, int w){
    x = v;
    y = w;
  }

  bool equalPoint(const point& otherpoint);
  void setPoint(int x, int y){
    this->x = x;
    this->y = y;
  }  
  void printPoint(){
    cout <<"(" << (*this).x << "," << (*this).y << ")" << endl;
  }
};

  bool point::equalPoint(const point& otherpoint){
    return (x == otherpoint.x && y == otherpoint.y);
  }

int main(){
  point p1,p2;
  int x1, y1, x2, y2;
  
  cout << "enter the x and y for the point :" << endl;
  cin  >> x1 >> y1;
  
  p1.setPoint(x1,y1);
  p1.printPoint();
  
  cout << "enter another 2 values :" << endl;
  cin  >> x2 >> y2;
  
  p2.setPoint(x2,y2);
  p2.printPoint();
  
  if(p1.equalPoint(p2)) {
      cout << "Yes" << endl;
  }
  
  else {
    cout << "No";
  }
  
 return 0;
}
