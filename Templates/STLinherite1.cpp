#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    static int a;
    static void f1(){cout<<"f1";}
};
class B:public A
{
    public:
};
int A::a=10;
int main()
{
    cout<<B::a;
    getch();
}
