// print the given number in decreasing and increasing order

#include<iostream>
using namespace std;
void dec(int n){
    if(n==0){                            // base condition
        return ;
    }
    cout<<n<<endl;             // print value in decreasing order
    dec(n-1);
}
void inc(int n){                   // base condition
    if(n==0){
        return ;
    }
    inc(n-1);
    cout<<n<<endl;                // print value in increasing order
}
int main()
{
    int n;
    cin>>n;
    dec(n);              // call dec( )   function
    inc(n);               // call inc( )    function
    return 0;
}
