#include<conio.h>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{

    stack<int>s1;
    s1.push(10);
    s1.push(40);
    s1.push(30);
    s1.push(50);
    s1.push(20);
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<endl;

    getch();
}
