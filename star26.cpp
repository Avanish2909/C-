#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==5 || j==1 || j==8)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}
