#include <iostream>

using namespace std;

class point{
public:
    int x, y;
    point(int a = 0, int b = 0) : x{a}, y{b} {
        cout << "Point constructor" << endl;
    }
    ~point(){
        cout << "Point Deconstructor" << endl;
    }
void print(){
    cout << "(" << x << "," << y << ")" << endl;
    }
};

class shape{
private:
    int red, blue, green;
public:
    point position;
    shape(int r = 255, int b = 0, int g = 255) : red{r}, blue{b}, green{g}{
        cout << "Shape constructor" << endl;
    }
    shape(point p){
        position = p;
    }
    ~shape(){
        cout << "Shape Deconstructor" << endl;
    }
    void printColor(){
        cout << red << ":" << blue << ":" << green << endl;
    }
    void setColor(int r, int b, int g){
        red = r;
        blue = b;
        green = g;
    }
    point getPosition(){
        return position;
    }
    void drawShape(){
        cout << "Draw shape" << endl;
        position.print();
    }
protected:
    const float PI = 3.14;
};

class circle : public shape {
public:
    circle(){
        cout << "Circle constructor" << endl;
    }
    ~circle(){
        cout << "Circle Deconstructor" << endl;    
    }
    circle(point p, float r){
        position = p;
        radius = r;
    }
protected:
float radius;
};

int main()
{
    point p(5, 3);
    circle c(p, 8);
    c.printColor();
    c.drawShape();

    return 0;
}