#include <iostream>

using namespace std;

int main(){
    int arr1[4] = {1, 2, 3, 4};

    cout << arr1 << endl; // address as name aka first value of array is similar to a ptr

    cout << *arr1 << endl; // gives value inside of address

    cout << &arr1 << endl; // gives address again 

    cout << (arr1 + 1) << endl; // address of second value

    cout << *(arr1 + 1) << endl; // value inside of second address

    cout << &(arr1 +1) << endl; // address again

    // the arr1 can be added to any x value and arr1 is just name 

    return 0;
}