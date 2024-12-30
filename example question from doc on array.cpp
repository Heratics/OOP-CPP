#include <iostream>

using namespace std;

int main(){
    int arr[] = {5, 11, 7, 3, 1};

    int *ptr = (arr + 2); // ptr points to the 7

    int &x = arr[3]; // x becomes 3

    arr[4] = x + 8; // since x is ptr and ptr is 3 3+8 is 11

    *(ptr + 1) = 15; // the ptr aka 3 becomes 15

    arr[2] = (*ptr +2) - 2* *arr; // ptr+2 is 11 then you have 2 * *arr - *arr is 5 so its 2 * 5 then you end up 11 - 10 which is 1

    for(int i = 0; i < 5; i++)
        cout << arr[i] << endl;


  return 0;
}
