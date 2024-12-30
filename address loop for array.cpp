#include <iostream>

using namespace std;

int main(){
    int arr[] = {5, 11, 7, 3, 1};

    for(int i = 0; i < 5; i++)
        cout << &arr[i] << endl;

  return 0;
}
