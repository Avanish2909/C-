#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the limit of the number of sum:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum is :"<<sum;

}
