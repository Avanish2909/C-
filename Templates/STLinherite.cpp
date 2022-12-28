#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    static void f1(){cout<<"f1";}
};
class B:public A
{
    public:
};
int main()
{
    B::f1();
    getch();
}
