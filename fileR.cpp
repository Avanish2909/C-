#include<fstream>
#include<conio.h>
#include<iostream>
using namespace std;
void reading()
{   char ch;
    ifstream fin;
    fin.open("file1.txt");
    if(!fin)
        cout<<"file not found";
    else
    {
        cout<<fin.tellg()<<endl;
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            // cout<<fin.tellg();
            ch=fin.get();
        }
    }
    fin.close();
}
int main()
{
    reading();
    getch();
}
