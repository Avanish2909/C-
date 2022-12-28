// All string Problem

#include<iostream>
#include<string>
#include<algorithm>             // Use for sort() function
using namespace std;
int main()
{
    // Print a simple string by user intput
    string str;
    cin>>str;
    cout<<str<<endl;

    // Print N time a given number of time string
    string str1(5,'n');               // syntex  --> string_name (no. of time repeted string , Enter the string )
    cout<<str1<<endl;          // five time print n

    // Print a single word string
    string str2="ApniKaksha";
    cout<<str2<<endl;

    // Print full sentence of string by using getline() function   syntex -->  getline(cin , string );
    string str3;
    getline(cin,str3);                   // Note -->  runtime error show
    cout<<str3<<endl;

    // join two number of string by using append keyword
    string s1="fam";
    string s2="ily";
    //s1.append(s2);                     [or]  s1=s1+s2;
   // cout<<s1<<endl;
         //[or]

    // join two number of string by using plus + operator
    cout<<s1+s2<<endl;

    // print a character of given index
    cout<<s1[1]<<endl;

    // Use of clear() function
    string abc="Avanish Prajapati is a hacker";
    abc.clear();              // syntex   --> string_name.clear();
    cout<<abc<<endl;

    // comparing of two string by using compare function
     string s3="abc";
     string s4="xyz";
     cout<<s4.compare(s3)<<endl;               // syntex   --> string2.compare(string1);


     string s5="abc";
     if(s3.compare(s5)==0)           //  if(!s3.compare(s5))
        cout<<"string are equal"<<endl;


     // use empty() function
     cout<<s3<<endl;
     if(!s3.empty())
        cout<<"string is not empty"<<endl;

     s3.clear();
     if(s3.empty())                           // another type of use empty function
        cout<<"string is empty"<<endl;

    // use erase() function
    string s6="nincompoop";
    s6.erase(3,3);            // s1.erase(index , no. of deleting char )
    cout<<s6<<endl;

    // use find() function  --> return index
     string s7="LeetCode";
     cout<<s7.find("etC")<<endl;

    // use of size() function
    cout<<s7.size()<<endl;
             // [or] another type to find the length of string by using length() function

    // use of length function
    cout<<s7.length()<<endl;

    // all Character in a single line
    for(int i=0; i<s7.length();i++)
        cout<< s7[i]<< endl;

     // use insert() function             --> syntex ->     obj.insert(index , "string")
      s7.insert(2,"lol");
      cout<<s7<<endl;

      // substring
      string s8="HackerRank";
      string s=s8.substr(6,4);                 // syntex --> obj.substre(index , number of string);
      cout<<s<<endl;

      // use of stoi() function  __ string to integer convert   __ syntex -->  int name_of_variable = stoi( converted string )
      string s9="143";
      int x=stoi(s9);
      cout<<x+2<<endl;

      // use to_string()+             function --> It's work on just like append() function
      int y=768;
      cout<<to_string(y)+"2"<<endl;

      // sorting string by sort() function
      string s10="xznvdklkhgsaoeytqiohin";
      sort(s10.begin(),s10.end());
      cout<<s10<<endl;

    return 0;
}
