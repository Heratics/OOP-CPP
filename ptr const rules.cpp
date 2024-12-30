#include <iostream>

using namespace std;

int main(){
    int x = 8;

    int *ptr = &x;

    const int *ptr = &x; // ptr pointing to a specific value where the const is for the int

    int const *ptr = &x; // the ptr being constant here where the value can change but it cant

    const int const *ptr = &x; // both the ptr and the value are constants that cant be changed

    return 0;
}