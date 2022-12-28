#include<iostream>
using namespace std;
float area(int);
int main()
{
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    int a=area(r);
    cout<<a;
}
float area(int r){
  return 3.14*r*r;
}
