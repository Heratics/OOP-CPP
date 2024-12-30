#include <iostream>

using namespace std;

class car{
private:
    int speed;
    string color;
    string name;
    
public:    
    car(int s = 0, string c = "red", string n = "BMW");
    ~car();
};

car::car(int s, string c, string n){
    speed = s;
    color = c;
    name  = n;
    
    cout << this << "\t" << speed << "\t" << color << "\t" << name << endl;
    //delete this;
}

car::~car(){
    cout << this << "\t" << speed << "\t" << color << "\t" << name << endl;
}

int main(){
    car c1(150);
    car c2;
    
    return 0;
}
