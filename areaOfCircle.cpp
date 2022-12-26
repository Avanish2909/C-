#include<iostream>
using namespace std;
float area(int);
int main()
{
    int r;
    cout<<"Enter radius :";
    cin>>r;
    float a;
    a=area(r);
    cout<<"Area of circle is: "<<a;
}
float area(int r){
  return 3.14*r*r;
}

