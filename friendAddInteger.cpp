#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    friend complex operator+(int,complex);
    void setData(int x,int y){a=x;b=y;}
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
complex operator+(int k,complex X)
{
    complex temp;
    temp.a=X.a+k;
    temp.b=X.b;
    return temp;
}
int main()
{
    complex c1,c2;
    c1.setData(3,4);
   c2=operator+(5,c1);
    c1.showData();
    c2.showData();
    getch();
}
