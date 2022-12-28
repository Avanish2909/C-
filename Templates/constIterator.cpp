#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array<int,5>a1={10,40,20,30,5};
    int k=1;
    //array<int,5>::reverse_iterator it;
    /* for(it=a1.rbegin();it!=a1.rend();it++){
        *it=*it+k;
        cout<<*it<<" ";
        k++;
    }
    cout<<"\n";
    */

    // now,we use const_iterator
    array<int,5>::const_reverse_iterator it;
    for(it=a1.crbegin();it!=a1.crend();it++){
        *it=*it+k;
         cout<<*it<<" ";
         k++;
    }

    getch();
}
