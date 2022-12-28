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
        void showData(){cout<<"\na="<<a<<" b="<<b;}
};
int main()
{
      complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    c2.setData(5,6);
    c2.showData();
    getch();
}
