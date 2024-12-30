#include <iostream>

using namespace std;

class car{
private:
    int speed;
    string color;
    string name;
    
public:
    static int count; //  must be given value outside of class
    car (int s = 0, string c = "red", string n = "BMW");
    ~car();
    static int numObject();
};

int car::count = 0;

int car::numObject(){
    return count;
}

car::car(int s, string c, string n){
    speed = s;
    color = c;
    name  = n;
    cout << this << " " << speed << " " << color << " " << name << endl;
    ++count;
}

car::~car(){
    cout << this << " " << speed << " " << color << " " << name << endl;
}

int main(){
    car c1(150);
    car c2;
    
    cout << car::numObject() << endl;

    return 0;
}
