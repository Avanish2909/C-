#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void f1(){}
    void f2(){}
};
class B:public A
{
public:
    void f1(){}
    void f2(int x){}
};
int main()
{
    A*p;
    p=new A;               // Dynamically name.             // p contain address of class A
    p->f1();                   // call function f1() by pointer p.
    delete p;               // delete address of A in pointer p.
    p=new B;              // Now p contain address of B.
    p->f1();                  // call function f2() by pointer p.
    delete p;              // delere address of B in pointer p.
}
