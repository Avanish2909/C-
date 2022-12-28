
// Print all character of given array with separated line.

#include<iostream>
using namespace std;
int main()
{
    // write a array of size 100.
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0')
    {
        // Print first element of array separate line.
        cout<<arr[i]<<"\n";
        i++;
    }
}
