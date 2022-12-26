#include<iostream>
using namespace std;
int main()
{
    unsigned long i,n,sum=0,d;
    cout<<"Enter the number:";
    cin>>n;
    for(i=0;i<=n;i++){
        d=i*i;
        sum+=d;
    }
    cout<<"square is : "<<sum;
}
