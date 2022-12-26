#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     char A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=1;i<n;i++){
        if(A[i]=='a' || A[i]=='b'){
            cout<<"string is acceptable"<<endl;

        }
        if(n==0){
                cout<<"only Epsilan string acceptable"<<endl;
        }
        else{
            cout<<"string is not acceptable"<<endl;
        }
    return 0;

    }
}
