#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i])
        {
            check=0;
            break;
        }
        if(check==true)
        {
            cout<<"word is palidrone "<<endl;
        }
        else
            cout<<"word is not palidrone "<<endl;
    }
    return 0;
}
