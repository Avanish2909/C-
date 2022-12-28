#include<iostream>
#include<conio.h>
using namespace std;
int linearsearch(int arr[], int n, int key ){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"Index of arr: "-<<linearsearch(arr, n, key)<<endl;
}
