#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"Enter size of element : ";
    cin>>n;
    int arr[n];
    cout<<" Enter array element:";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<n;i++){
    if(max<arr[i])
    {
        max=arr[i];
    }
    }
    cout<<"maximum number of element : "<<max;
}
