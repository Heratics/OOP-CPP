#include <iostream>

using namespace std;

class Array {
public:
    int * ptr;
public:
    Array(int size){
        ptr = new int[size];
        for(int i = 0; i < size; i++){
            ptr[i] = i + 1;
        }
    }
    
    int operator[](int x){ return ptr[x]; }
};

int main(){
    Array arr(5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}