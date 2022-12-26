#include<iostream>
using namespace std;
int main()
{
    char c='A';
    int i,j;
    for(i=1;i<=5;i++)
    {
        c='A';
        for(j=1;j<=9;j++)
        {
            if(j<=i)
            {
                cout<<c;
                c++;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

