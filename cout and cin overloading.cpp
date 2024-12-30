#include <iostream>

using namespace std;

class binary {
    int vec[2];
public:
    binary(int a = 0, int b = 0) {vec[0] = a; vec[1] = b;}
    friend ostream & operator<<(ostream &, const binary &);
    friend istream & operator>>(istream &, binary &);
};

ostream & operator<<(ostream & output, const binary & C){
    output << "[" << C.vec[0] << "," << C.vec[1] << "]" << endl;
    return output;
}

istream & operator>>(istream & input, binary & C){
    for(int i = 0; i < 2; ++i){
        input >> C.vec[i];
    }
    return input;
}

int main(){
    binary vec;
    cin  >> vec;
    cout << vec;
    
    return 0;
}