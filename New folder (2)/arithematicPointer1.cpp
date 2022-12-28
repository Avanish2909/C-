#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // for character value
    char ch='a';
    char *cptr=&ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    return 0;
}
