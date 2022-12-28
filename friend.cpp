#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a, b;
public:
    friend void f1(complex);
    setData(int x,int y){a=x;b=y;}
};
void f1(complex c)
{
    int s;
    s=c.a+c.b;
    cout<<"sum is: "<<s;
}

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    f1(c1);
    getch();
}
