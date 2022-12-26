#include<iostream>
using namespace std;
int main()
{
    int i ,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
    if(n%2==0)
    {
        cout<<" It is not a prime number";
        break;
    }
    }
      if(i==n)
    {
        cout<<"It is a prime number";
    }
}
