#include <iostream>

using namespace std;

int main()
{
    int a [] = {1 , 3 , 5};
    int b [] = {2 , 4 , 6};
    
    cout << "c = {";
    
    for (int i = 0; i < 3; i++){
    cout << (a[i] + b[i]) << ",";
    }

    cout << "}";
    
    return 0;
}