#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
int area(int,int);
int main()
{
int r;
cout<<"enter radius of circle :";
cin>>r;
float a;
a=area(r);
cout<<"Area of circle: "<<a;
getch();
int l,b;
cout<<"\n Enter length and breath of a rectangle: ";
cin>>l>>b;
int A=area(l,b);
cout<<"Area of rectangle: "<<A;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}

