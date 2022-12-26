#include<iostream>
using namespace std;
int main()
{
    int n,tot=0;
    cout<<"Enter the number :";
    cin>>n;
    for(tot=0;n>0;tot++){
            n=n/10;

    }
     cout<<"number of Digits :"<<tot;
}
