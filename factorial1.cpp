#include<iostream>
using namespace std;
int main()
{
    int f,n,i;
    cout<<"Enter number: "<<endl;
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial value is: "<<f;
}
