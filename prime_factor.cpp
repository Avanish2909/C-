#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    int count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<n;i++){
        for(j=2;j<i;j++){
            if (i%j==0){
                break;
            }
        }
        if(j==i){
            if(n%i==0){
                cout<<i<<" ";
                count++;
            }
        }
        if(count==0){
            cout<<"not found any prime factor"<<endl;
        }
        }

}
