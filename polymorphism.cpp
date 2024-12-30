#include <iostream>

using namespace std;

class shape {
public:
    shape() {cout << "shape constructor" << endl;} 
    //virtual should be added to make the construcor and deconstructor work for all sub classes

    virtual ~shape() {cout << "shape destructor" << endl;} 
    //virtual should be added to make the construcor and deconstructor work for all sub classes

    //virtual void draw() {cout << "draw shape" << endl;}

};

class rectangle : public shape {
public:
    rectangle() {cout << "rectangle constructor" << endl;}
    
    ~rectangle() {cout << "rectangle destructor" << endl;}
    
    //void draw() {cout << "draw rectangle" << endl;}
};

class square : public rectangle {
public:
    square() {cout << "square constructor" << endl;}
    
    ~square(){cout << "square destructor" << endl;}
    
    //void draw(){cout << "draw square" << endl;}

};

int main(){
    shape * rShape, * sShape;
    rectangle * aRectangle;
    square * aSquare;
    
    //rShape = aRectangle = new rectangle();
    
    //rShape->draw(); 
    // without virtual it wont draw the rectangle because its declared as a shape it will draw shape
    //aRectangle->draw(); 
    // already prints rectangle as its defined as a rectangle in its declaration
    
    //static_cast<shape*>(aRectangle)->draw(); 
    // without virtual it wont draw the rectangle because its declared as a shape it will draw shape

    //aSquare->draw();
    
    //rShape = aSquare = new square();
    
    //rShape->draw(); 
    // wouldnt draw square without virtual as its definition is a shape 

    //aRectangle = aSquare = new square();
    
    //aRectangle->draw(); 
    // would draw rectangle without virtual as its defined as rectangle
    
    //aRectangle = aSquare = new square();
    
    //aRectangle->draw(); 
    // would draw square with virtual and rectangle without based on their definitions
    
    shape * s;
    s = new square();
    
    delete s; 
    // to call on constructor and deconstructor | and would only call on shape destructor if not virtual
    
    return 0;
}
