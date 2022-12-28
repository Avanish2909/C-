#include<iostream>
using namespace std;
class A
{
    // Variables
public:
    virtual void f1()=0;          // pure virtual function.
};
int main()
{
    A*p;
    p->f1();
    return 0;
}
