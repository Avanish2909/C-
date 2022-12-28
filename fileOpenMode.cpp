#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void reading(){
    char ch;
    ifstream fin;
    fin.open("file1.txt");
    if(!fin)
        cout<<"file not found";
    else{
        cout<<fin.tellg();
        ch=fin.get();
        while(!fin)
        {
            cout<<" "<<ch<<endl;
            ch=fin.tellg();
        }
    }
    fin.close();
}
int main()
{
    reading();
    getch();
}
