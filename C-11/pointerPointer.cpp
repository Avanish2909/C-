#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=20;
    int*p;
    p=&a;
    cout<<*p<<endl;
    int**q=&p;                         // pointer to pointer calling.
    cout<<*q<<endl;            // Value of p (i.e) address of q.
    cout<<**q<<endl;           // Value of a.
    return 0;
}
