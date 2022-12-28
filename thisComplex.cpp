#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    complex add(complex c)                            //               [or]             //             complex operator+(complex c)     [or]           complex opertor+(complex c )
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
    complex c1,c2,c3;
    c1.setData(3,4);             //  c1 =  3+4i
    c2.setData(5,6);             //  c2  =  5+6i
    c3=c1.add(c2);             // addition perform                           [or]            //  c3=c1.operator+(c2);                  [or]                    c3=c1+(c2);
    c1.showData();
    c2.showData();
    c3.showData();           // show addition of two complex number = 8+10i
    getch();
}
