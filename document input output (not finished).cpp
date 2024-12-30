#include <iostream>

using namespace std;

class document {
public:
    string vec[2];
    document(){}
    
    friend istream & operator>>(istream &, document &);
    friend ostream & operator<<(ostream &, const document &);
    
};

istream & operator>>(istream & input, document & d){
    for(int i = 0; i < 2; i++ ){
        input >> d.vec[i];
    }
    return input;
}

ostream & operator<<(ostream & output, const document & d){
    for(int i = 0; i < 2; i++ ){
        output << d.vec[i] << endl;
    }
    return output;
}

int main(){
    document doc;
    cin  >> doc;
    cout << doc;
    

    return 0;
}