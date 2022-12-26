#include<iostream>
using namespace std;
int area(int , int);
int main()
{
    int l,b;
    cout<<"Enter length and breath of rectangle: ";
    cin>>l>>b;
    int a;
    a=area(l,b);
    cout<<"Area of rectangle: "<<a;
}
int area(int l,int b){
  return l*b;
}
