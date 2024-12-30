#include <iostream>

using namespace std;

class car {
private:
    int speed;
    string color;
    string name;
    
public:
    int numOfCars;
    car(int s = 0, string c = "Red", string n = "BMW");
    ~car();

};

car::car(int s, string c, string n){
    speed = s; color = c; name = n;
    cout << this << "\t" << speed <<  "\t" << color <<  "\t" << name << endl;
    numOfCars = 5;
}

car::~car (){
    cout << this <<  "\t" << speed <<  "\t" << color <<  "\t" << name << endl;
}

int main(){
    car * carPtr; // custom pointer that functions same as "this"
    
    carPtr = new car;
    
    cout << ++(carPtr -> numOfCars) << endl;
    
    delete carPtr; // automatically calls upon destructor

    return 0;
}

//Array of cars delete [] carPtr;
// car p;
//car * carPtr = new car[3] {car (200,"brown","toyota"), car(200, "yellow","hunda"), p};
