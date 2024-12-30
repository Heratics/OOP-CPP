#include <iostream>
#include "point.h"

using namespace std;

point::point (int x1, int y1){
    x = x1;
    y = y1;
    
    cout <<"constructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
}

point::~point(){
    cout <<"deconstructor" << "\t" << this << "\t" << "(" << x << "," << y << ")" << endl;
    //delete this;
}
