#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
int main()
{
    complex c1,c2;
    c2=c1.operator-();
    c1.showData();
    c2.showData();
}
