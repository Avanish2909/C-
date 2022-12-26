#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter limit of number:";
    cin>>n;
    cout<<"Even number are :"<<endl;
    for(i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<"  ";
        }
    }
}
