#include <iostream>

using namespace std;

int main(){
    int x = 8;

    int &y = x;

    cout << x << endl; // 8

    cout << y << endl; // 8 

    y = y + 1;

    cout << x; // 9

    // in this case this reference is changing the value of the original var address it is linked to 

    return 0;
}
