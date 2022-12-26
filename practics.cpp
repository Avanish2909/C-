#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec={10,20,30,40,50};
    vector<int>::iterator it;
    cout<<"original vector: ";
    for(int i=0;i<vec.size();i++){
        cout<<" "<<vec[i];
    }
    cout<<"\n";
    int ser;
    cin>>ser;
    it=find(vec.begin(),vec.end(),ser);
    if(it != vec.end()){
        cout<<" Element "<<ser<<" found at position :  ";
        cout<<it-vec.begin()<<" (countinue from zero)"<<endl;
    }
    else
        cout<<"Element not found \n"<<endl;

}
