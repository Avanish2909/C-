#include<iostream>
using namespace std;
class A
{
public:
    virtual void f1()=0;                 //    pure virtual function.
};
class B:public A
{
public:
    virtual void f1(){}                   //  Overidding function of f1().
};
int main()
{
    A*p;
    p->f1();
    return 0;
}
