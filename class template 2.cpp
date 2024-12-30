#include <iostream>

using namespace std;

template <class T, int max, class U = int>
//max is an integral non-type parameter
class A
{
    T x;
    U y;
public:
    void set(T a, U b){x=a; y=b;}
    void print(){ cout<<x<<" "<<y<<" "<<max<<endl; }
    T getX();
};

template <class T, int max, class U>
T A<T, max, U>::getX()
{ return x; }

int main()
{
    A <int, 1000> objA;
    objA.set(5, 3.8);
    objA.print();

    return 0;
}
