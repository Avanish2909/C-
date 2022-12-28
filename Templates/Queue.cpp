#include<iostream>
#include<conio.h>
#include<queue>
#include<vector>
#include<stack>

using namespace std;
int main()
{
    queue<int,vector<int>>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    cout<<q1.back()<<endl;
    cout<<q1.front()<<endl;
    getch();
}
