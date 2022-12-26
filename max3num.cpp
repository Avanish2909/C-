#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    cout<<"\nGreater number is: ";
    if(a>b)
        if(a>c)
        cout<<a;
    else
        cout<<c;
    else
        if(b>c)
        cout<<b;
    else
        cout<<c;
    getch();
}
