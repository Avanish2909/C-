#include<iostream>
using namespace std;
int main()
{
    int a,b,r,lcm,hcf,x,y;
    cout<<"Enter two number "<<endl;
    cin>>a,b;
    x=a;
    y=b;
    while(true)
    {
        lcm=a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    hcf=x*y/lcm;
    cout<<"LCM is : "<<lcm<<endl;
    cout<<"HCF is : "<<hcf<<endl;

}
