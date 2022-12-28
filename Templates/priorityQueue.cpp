#include<iostream>
#include<conio.h>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    priority_queue<int,vector<int>>p1;
    p1.push(10);
    p1.push(50);
    p1.push(30);
    p1.push(40);
    p1.push(20);
    cout<<p1.top()<<endl;
    p1.pop();
    cout<<p1.top()<<endl;
    getch();
}
