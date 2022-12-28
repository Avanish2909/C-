#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
    int a,b;
    friend complex operator+(complex,complex);
    public:
    void setData(int x,int y){a=x; b=y;}
    showData(){cout<<"\na="<<a<<" b="<<b;}
};
complex operator+(complex X,complex Y)
{
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=operator+(c1,c2);
    c3.showData();
    getch();
}
