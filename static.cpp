#include<iostream>
#include<conio.h>
using namespace std;
class item
    {
    public:
        int a,b;     //instance member variable
        static int k;   // static member variable
    };
    int item::k=1;
int main()
{
    item i1,i2;
    i1.a=5;
    cout<<i2.a<<endl;
    i1.k=10;
    cout<<i2.k<<endl;
         // [or]..
    cout<<item::k;
}
