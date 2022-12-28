#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    virtual void f1(){}
    void f2(){}
};
class B:public A
{
public:
    void f1(){}
    void f2(){}
};
int main()
{
    A*p;
    p=new A;
    p->f1();                          //  A class function running
    delete p;
    p=new B;
    p->f1();                            // B class function running
    delete p;
}
