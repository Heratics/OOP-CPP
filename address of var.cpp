#include <iostream>

using namespace std;

int main()
{
int x = 10;

  cout << * (&x); // with the * it gives back value 
  
  //cout << &x --> gives back location address in RAM

  return 0;
}