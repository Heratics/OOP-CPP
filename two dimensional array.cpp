#include <iostream>

using namespace std;

int main()
{
    int test[2][3] = {{5,1,3}, {7,9,6}};

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
    cout << test[i][j] << endl;
    }
  }
  
    return 0;
}
