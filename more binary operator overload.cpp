#include <iostream>

using namespace std;

class binary {
public:
    int vec[2];
    binary(int a, int b) { vec[0] = a, vec[1] = b; }
    binary operator/(int);
    friend binary operator-(int, binary & v1);
    void display() { cout << "[" << vec[0] << "," << vec[1] << "]" << endl; }
};

binary binary::operator/(int a){
    binary c3(0,0);
    for(int i = 0; i< 2; i++){
        c3.vec[i] = this->vec[i] / a;
    }
    return c3;
}

binary operator- (int a, binary & c1){
    binary c3(0,0);
    for(int i = 0; i< 2; i++){
        c3.vec[i] = a - c1.vec[i];
    }
    return c3;
}

bool operator>=(binary & c1, int a){
    int sum = 0;
    for(int i = 0; i< 2; i++) {
        sum = sum + c1.vec[i];
    }
    return sum >= a;
}

int main(){
    binary vec1(10,25) , vec2(4,5);
    binary vec3 = vec1 / 5;
    binary vec4 = 7 - vec2;
    //binary vec4 = vec2 - 7; ---> error
    vec3.display();
    vec4.display();
    cout << (vec2 >= 11 ? "True" : "False") << endl;
    //vec2 >= 11 ---> error
    
    return 0;
}