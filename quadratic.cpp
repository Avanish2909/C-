#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,D,r1,r2;
    cout<<"Enter value of a,b,c: "<<endl;

    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0){
        cout<<"roots are real and unequal"<<endl;
         r1=(-b+sqrt(D))/(2*a);
         r2=(-b-sqrt(D))/(2*a);
         cout<<r1<<"  "<<r2;
    }
    else if(D==0){
        cout<<"roots are real and equal"<<endl;
        r1=-b/(2*a);
        r2=-b/(2*a);
        cout<<r1<<"  "<<r2;
    }
    else{
        cout<<"roots are imaginary"<<endl;
    }

}
