#include <iostream>

using namespace std;

/*
int fun(int a, int b)
{
    if(a>b) return a;
    else    return b;
}
double fun(double a, double b)
{                            
    if(a>b) return a;           all of this can be made into the template below
    else    return b;
}
string fun(string a, string b)
{
    if(a>b) return a;
    else    return b;
}
*/

template<class T>
T fun(T a, T b)
{                       // and this can be written like the one below
    if(a>b) return a;
    else    return b;
}

/*
auto fun(auto a, auto b){   
    if(a>b) return a;
    else    return b;
}

*/

int main(){
    cout << fun<int>(8,5) << endl;
    cout << fun<string>("Ali","Ahmed") << endl;
    cout << fun<double>(3.4, 5.5) << endl;

    return 0;
}