#include <iostream>

using namespace std;

class Time {
 private:
  int hr;
  int min;
  int sec;
  
 public:
  void setTime (int h, int m, int s){
    hr = h;
    min = m;
    sec = s;
  }
  
  void printTime () const{
    cout << "the time taken is :" << "(" << hr << ":" << min << ":" << sec << ")" << endl;
  }
  
};

int main() {
  Time t1, t2;
  int h, m, s;

  cout << "Enter the time it took you to drink a glass of water in (hr.min.sec) :";
  cin  >> h >> m >> s;
  
  t1.setTime(h, m, s);
  t1.printTime();

  return 0;
}


