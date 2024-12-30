#include <iostream>

using namespace std;

class binary {
public:
    int vec[2];
    binary (int a = 0, int b = 0) { vec[0] = a; vec[1] = b; }
    binary operator+(binary & c2);
    friend binary operator%(binary & v1, binary & v2);
    void display () { cout << "[" << vec[0] << "," << vec[1] << "]"<< endl; }
    
};

binary binary::operator+(binary & c2){
    binary c3(0,0);
    for(int i = 0; i < 2; i++){
        c3.vec[i] = this->vec[i] + c2.vec[i];
    }
    return c3;
}

binary operator*(binary & c1, binary & c2){
    binary c3(0,0);
    for(int i = 0; i < 2; i++){
        c3.vec[i] = c1.vec[i] * c2.vec[i];
    }
    return c3;
}

binary operator%(binary & c1, binary & c2){
    binary c3(0,0);
    for(int i = 0; i < 2; i++){
        c3.vec[i] = c1.vec[i] % c2.vec[i];
    }
    return c3;
}

int main(){
    binary vec1(6,8), vec2(4,5);
    
    binary vec3 = vec1 + vec2;
    binary vec4 = vec1 * vec2;
    binary vec5 = vec1 % vec2;
    
    vec3.display();
    vec4.display();
    vec5.display();


    return 0;
}