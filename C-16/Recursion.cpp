// find the sum of given number

#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0)
    {
        return 0;
    }
    int prevSum=Sum(n-1);
    return n+prevSum;               // function  call previous sum
}
int main()
{
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
    return 0;

}
