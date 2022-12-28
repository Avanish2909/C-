#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    // make a vector
    vector<int>v={10,20,30,70};
    vector<int>::iterator it;
    // insert a element by using push_back() function
    v.push_back(40);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";

    }
    // insert a element by using insert keyword
    // syntex--> v.insert(index,element);
    cout<<endl;
    v.insert(it,50);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";

    }
    // insert element to given position
    cout<<endl;
    v.insert(it-2,60);           // insert element 60 after index 2
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";

    }
    // check the capacity of given vector
    cout<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    v.push_back(90);
    v.push_back(91);
    v.push_back(92);
    v.push_back(93);
    v.push_back(94);

    // now , if insert element more then capacity then the capacity will be double
    // check the capacity of

    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    v.shrink_to_fit();

    // we make capacity and size are equal
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;


    getch();

}
