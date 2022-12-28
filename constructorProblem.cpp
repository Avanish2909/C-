#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(){a=0; b=0;}
    complex(int x){a=x;b=0;}
    complex(int x, int y){a=x; b=y;}
    complex(complex &c)      //   copy constructor
    {
        a=c.a;
        b=c.b;
    }
    void setData(int x, int y){a=x; b=y;}
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
int main()
{
    complex c1(10,20),c2(5,8),c3,c4();
    complex c5=c1;       // copy c1 data into c5 by using copy constructor
    // c1.setData(3,4);
    c1.showData();
    // c2.setData(5,6);
    c2.showData();
    c5.showData();
    getch();
}
