#include<iostream>
using namespace std;
template <class X>           // use class or typename
 X big(X a, X b)         //  X= return type
{

    if(a>b)
        return a;
    else
        return b;
}
int main()
{

    cout<<big(3,4);
}
