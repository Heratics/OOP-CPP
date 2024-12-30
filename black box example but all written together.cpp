#include <iostream>

using namespace std;

class Time {
 private:
  int hr;
  int min;
  int sec;
    
 public:
  void setHour(int h);
  int getHour() const;
  
  void setMinute(int m);
  int getMinute() const;
  
  void setSecond(int s);
  int getSecond() const;
};

// below are the declared functions outside of the class where you can place in seperate file
// to create a black box type function where the work is hidden but the interface is shown

 void Time::setHour(int h){
  hr = h;
}

 int Time::getHour() const{
  return hr;
}

 void Time::setMinute(int m){
  min = m;
}

 int Time::getMinute () const{
  return min;
}

 void Time::setSecond(int s){
  sec = s;
} 

 int Time::getSecond() const{
  return sec;
}

int main(){
  Time myClock;

 return 0;
}