#include<iostream>
using namespace std;
int num(int);
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a=num(n);

}
int num(int n){
  if(n%2==0){
    cout<<n<<" is even";
    }
    else{
        cout<<n<<" is odd";
    }

}
