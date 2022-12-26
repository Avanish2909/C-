#include<iostream>
using namespace std;
int main()
{
    //swapping two value without using third variable
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapping value is"<<a<<" "<<b;

}
