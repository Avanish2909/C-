#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(){a=0; b=0;}
    complex(int x, int y){a=x; b=y;}
    void setData(int x, int y){a=x; b=y;}
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
int main ()
{
    complex c1(10,20),c2(5,8);
    // c1.setData(3,4);
    c1.showData();
    // c2.setData(5,6);
    c2.showData();
    getch();
}
