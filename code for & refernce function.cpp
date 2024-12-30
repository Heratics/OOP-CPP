#include <iostream>

using namespace std;

int test(int &y){
    y = y + 1;

 return y;
}

int main(){
   int x = 8;

   cout << test(x);

 return 0;
}
