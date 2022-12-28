#include<stack>
#include<conio.h>
#include<iostream>
#include<vector>
#include<queue>
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
   cout<<p1.top();
    getch();

}
