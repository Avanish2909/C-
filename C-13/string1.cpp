#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // convert into upper case
    string str="abdlcsljpeoiwmchqz";
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            str[i] -= 32;                                  // a-A=32;
    }
    cout<<str<<endl;

    // convert into lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    }
    cout<<str<<endl;

    // use of transform() function
    // converted string upper and lower case by directly of using transform functon
    // syntex   --> tranform(staring index , ending index , convert position of starting index ,condition( :: toupper / :: tolower )
    // convert in upper case
    string s="fkszncleopqunwxtim";
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;

    // convert in lower case
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    // find the greatest number
    string s1="985631421375489627";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;

    // find a greatest string
    int freq[26];
    for(int i=0; i<26;i++)
        freq[i]=0;
    for (int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxF)
        {
        maxF = freq[i];
        ans = i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;



}
