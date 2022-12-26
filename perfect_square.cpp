#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int s=sqrt(n);
    if(s*s==n)
    {
        cout<<"It is perfect square";
    }
    else{
        cout<<"it is not a perfect square";
    }
}
