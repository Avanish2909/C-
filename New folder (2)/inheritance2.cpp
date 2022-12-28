#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void f1(){   }
};
class B1:virtual public A
{
public:
    void f2(){   }
};
class B2:virtual public A
{
public:
    void f3(){   }
};
class C:public B1,public B2
{
public:
    void f4(){   }
};
int main()
{
    C obj;
    obj.f4();                  // C
    obj.f3();                 // B2
    obj.f2();                 // B1
    obj.f1();                // show error if virtual keyword not used
}
