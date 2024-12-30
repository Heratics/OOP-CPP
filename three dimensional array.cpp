/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int test[2][3][3] = {
                        {{5,1,3}, {7,9,6}, {8,4,2}},
                        {{2,11,3}, {4,5,6}, {7,8,9}}
                      };

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        cout << test[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
    return 0;
}

// by A.M.A.

