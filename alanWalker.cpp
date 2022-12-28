#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j;
     for(i=1;i<=12;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j<=15 && i==j)
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
