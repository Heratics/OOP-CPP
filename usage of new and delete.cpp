#include <iostream>

using namespace std;

int main(){
    int size;
    
    cout << "enter array size :";
    cin  >> size;
    
    int *arr = new int[size]; // the new tag means go save the value in the heap 

    cout << "the size of this array is :" << size;
    
    delete[] arr; // deletes the value stored in heap as to not overflow with unused memory in heap 
    // aswell as the memory stored in the stack aka the variables values 
    
    return 0;
}