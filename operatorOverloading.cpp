#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int a, int b){this->a=a; this->b=b;}
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
int main()
{
    complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,6);
    c3.setData(3,4);
    c4=(c1+(c2))+c3;
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
}
