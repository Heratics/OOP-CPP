#include <iostream>

using namespace std;

int main()
{
    int x = 8;
    int *ptr = &x;
    
    cout << x << endl;// = 8
    cout << *ptr << endl;// = 8 
    
    cout << &x << endl;// = address of 8 
    cout << ptr << endl;// = address of 8
    
    *ptr = 10;
    cout << x;

    return 0;
}

