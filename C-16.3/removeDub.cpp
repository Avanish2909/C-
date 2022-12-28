#include<iostream>
using namespace std;
string removeDub(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDub(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    else{
        return ch+ans;
    }

}
int main()
{
    cout<<removeDub("aaaabbbeeecdddd");
    return 0;
}
