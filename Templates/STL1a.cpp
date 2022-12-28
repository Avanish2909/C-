  // we does not implement by stack but it will implement by vector
#include<iostream>
#include<conio.h>
#include<stack>
#include<vector>
int main()
{
    stack<int,vector<int>>s1;
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
    getch();
}
