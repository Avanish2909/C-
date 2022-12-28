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
            fin.seekg(5);
            cout<<fin.tellg()<<endl;
            ch=fin.get();
            while(!fin.eof()){
                cout<<ch;
                ch=fin.get();
            }
              //  cout<<fin.tellg();
    }
    fin.close();
}
int main()
{
    reading();
    getch();
}
