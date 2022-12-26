#include<iostream>
using namespace std;
int main()
{
    // Swapping two value by using third variable
    int a,b,c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    c=a ;
    a=b;
    b=c;
    cout<<"swapping value is"<<endl<<a<<" "<<b;
}
