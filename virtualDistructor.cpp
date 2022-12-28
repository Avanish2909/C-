#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    virtual ~A(){}
};
class B:public A
{
public:
    ~B(){};
};
int main()
{
    A*p=new B;
    delete p;
    return 0;
}
