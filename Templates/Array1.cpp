#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array<int,5>a1={10,40,20,30,5};
    for(int i=0;i<5;i++)
        cout<<a1.at(i)<<" ";
    cout<<endl;
    array<int, 5> :: iterator it;

    it=a1.begin();
    cout<<*it<<endl;

    it++;             // increment 1 index from current location
    cout<<*it<<endl;

    cout<<*(it+2)<<endl;             // increment 2 index from current index by using this method

    // Using for loop and print all array
    for(it=a1.begin();it!=a1.end();it++)
        cout<<*it<<" ";

        // another method to use for loop
    cout<<endl;
    for(int x : a1)
        cout<<x<<" ";
    // using reverse iterator -->>  reverseIterator.cpp


    getch();
}
