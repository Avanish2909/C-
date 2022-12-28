#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void reading()
{
    char ch;
    ifstream fin;
    fin.open("file1.txt");
    if(!fin)
        cout<<"file not found";
    else{
        fin>>ch;
        while(!fin.eof())                                  // eof  -> end of file.
        {
            cout<<ch;
            fin>>ch;
        }
    }
    fin.close();
}
int main()
{
    reading();
    getch();
}
