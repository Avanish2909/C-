#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k=1;
    cout<<"Enter number of row: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<k;
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

}
