#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10;
    int*aptr;
    aptr=&a;
    cout<<&a<<endl;              // address of a
    cout<<aptr<<endl;           // address of a
    cout<<*aptr<<endl;        // Value of a.
}
