#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array<int,5>a1={10,40,20,30,5};
    cout<<a1.max_size()<<endl;
    array<int,5>::reverse_iterator it;
    for(it=a1.rbegin();it!=a1.rend();it++)
        cout<<*it<<" ";
    getch();
}
