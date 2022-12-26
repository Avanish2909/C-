#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // 1st method
    /*
    char str[]="Avanish Prajapati";
    cout<<strrev(str);
    */
    char str[]="Avanish Prajapati";
    int length=strlen(str);
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
}
