//   Overloading of Negative sign:
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
    friend complex operator-(complex);
public:
    void setData(int x,int y){a=x;b=y;}
    showData(){cout<<"\na="<<a<<" b="<<b;}
};
complex operator-(complex X)
{
    complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
int main()
{
    complex c1,c2;
    c1.setData(3,4);
    c2=-c1;
    c1.showData();
    c2.showData();
    getch();
}
