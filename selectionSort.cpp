// Selection sort in c++

#include<iostream>
using namespace std;

// create a swap function
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
// create selection sort function
void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i+1;
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }

}

int main()
{
    int data[]={19,40,29,68,16,74,12};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    printArray(data, size);

}
