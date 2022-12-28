#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    friend istream& operator>>(istream&,complex&);
    void showData(){cout<<"\na="<<a<<" b="<<b;}
};
istream& operator>>(istream& din,complex& c)
{
    din>>c.a>>c.b;
    return din;
}
int main()
{
    complex c1;
    cout<<"Enter a complex number: ";
    cin>>c1;
    c1.showData();
    getch();
}
