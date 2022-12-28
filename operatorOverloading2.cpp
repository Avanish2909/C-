#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    bool operator==(complex c)
    {
                                                                                                                                //  if(a==c.a && b==c.b)
         return a==c.a && b==c.b;                   //             [or]                                 //         return true;
                                                                                                                              //   else
                                                                                                                               //      return false;
    }
};
int main()
{
    complex c1,c2,c3;
    if(c1==c2)
        cout<<"object are same";
    else
        cout<<"different value";
    getch();
}
