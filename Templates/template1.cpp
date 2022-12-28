#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void setTime(int Hours, int minutes, int seconds){h=Hours; m=minutes; s=seconds;}
    void showTime(){cout<<"\nHours="<<h<<" minutes="<<m<<" seconds="<<s;}
};
template <typename X>
X big(X a , X b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    Time t1,t2,t3;
    t1.setTime(2,40,30);
    t2.setTime(4,50,10);
    t3=big(t1,t2);
    t3.showTime();
}
