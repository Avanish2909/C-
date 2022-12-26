#include<iostream>
using namespace std;
int main()
{
    /* taking value in compile time
   int arr[ ]={5,10,15,20,25};
   int length=sizeof (arr)/ sizeof(arr[0]);
   for(int i=length-1;i>=0;i--){
    cout<<arr[i]<<"  ";
   }
   */
   // taking value by user
   int  arr[5];
   cout<<"Enter element of array :  ";
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
   cout<<"Reverse of array:  " ;
   for(int i=4;i>=0;i--){
    cout<<arr[i]<<"  ";
   }
}
