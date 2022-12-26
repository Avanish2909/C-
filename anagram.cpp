#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="Avanish Prajapati";
    string s2="itapajarP hsinavA";
    int lengthh1=s1.length();
    int lengthh2=s2.length();
    if(lengthh1==lengthh2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"boths are anagram"<<endl;
        }
        else{
            cout<<"boths are not anagram"<<endl;
        }
    }
    else{
            cout<<"boths are not anagram"<<endl;
    }
}
