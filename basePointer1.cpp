#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void f1(){}
    virtual void f2(){}
    virtual void f3(){}
    void f4(){}

};
class B:public A
{
public:
    void f1(){}
    void f2(){cout<<"app";}
    void f5(){}
};
int main()
{
    A*p;
    p=new A;
    p->f1();                     //  EB  ->   A                                                     EB=EAIRLIAL BINDING
    p->f2();                     //  LB  ->   B
    p->f3();                     // LB  ->    B                                                       LB=LET BINDING
    p->f4();                    //   EB  ->   A
    delete p;
    p=new B;
    p->f1();                    //  EB  ->  A
    p->f2();                   //  LB  ->  B
    p->f3();                   //  LB  ->   A
    p->f5();                  //   EB   ->   A
    delete p;             // error
    p->f4();
}
