#include <iostream>

using namespace std;

class Circle {
public:
    void draw(){
        cout << "Drawing Circle shape" << endl;
    }
};

class Triangle {
public:
    void draw(){
        cout << "Drawing Triangle shape" << endl;
    }
};

int main()
{
    Circle * c = new Circle();
    Triangle * t = new Triangle();
    
    c->draw();
    t->draw();

    return 0;
}
