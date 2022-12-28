#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void f1(){}
    void f2(){}                                     //  hide function--> Because function f2(int x) call of class B.

};
class B:public A
{
public:
    void f1(){}
    void f2(int x){}
};
int main()
{
    B obj;
    obj.f1();         // B                                     function overloading--> function overloading f1() by call class B.
    obj.f2();         // show error
    obj.f2(4);       // B                                     function hiding --> calling function f2() of class B.
    getch();
}
