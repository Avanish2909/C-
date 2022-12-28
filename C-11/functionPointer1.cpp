#include<iostream>
using namespace std;
swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    //  Swap function pass by reference.
    int a=2;
    int b=4;

    /*
    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);
    */
    swap(&a,&b);              // passing reference.
    cout<<a<<" "<<b;
    return 0;
}
