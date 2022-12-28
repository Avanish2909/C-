#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    friend ostream&operator<<(ostream&,complex);
    void setData(int x,int y){a=x;b=y;}
};
ostream&operator<<(ostream& dout,complex c)
{
    dout<<"a="<<c.a<<" b="<<c.b;
    return dout;
}
int main()
{
    complex c1;
    cout<<c1;
    getch();
}
