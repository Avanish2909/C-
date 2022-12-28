#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array<int , 5> a1={10,40,20,30,5};
    cout<<"Array size is: "<<a1.max_size()<<endl;
    for(int i=0;i<5;i++){
        cout<<a1[i]<<" ";
    }
    // checking garvage value
    cout<<"\n";
    for(int i=0;i<7;i++)
        cout<<a1[i]<<" ";        // contain garvage value zero

    // If remove garvage value then put of these lines--
    cout<<"\n";
    for(int i=0;i<7;i++)
        cout<<a1.at(i)<<" ";           //  output + show error

    getch();

        //  **                  *****            ****               *****               *****               *****                  *********             ************                *****        ************            *******

    //  solve this problem by iterator   ---    Array1.cpp



}
