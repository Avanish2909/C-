#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=new int();                 // create a p pointer which locate address of a.
    *p=10;                                  // store the value of a
    cout<<*p<<endl;               // print value of a
    delete(p);                           // delete address of 'a'  which is by p
    p=new int[4];                     //  create a array of size 4
    cout<<p;
    delete []p;                        // delete address of arrray
    p=NULL;                            //  delete pointer p.
    return 0;
}
